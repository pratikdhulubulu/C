#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char rec[100]={},org[100]={},ch;
    int i=0,j=0,k=0,count=0;
    FILE* fp;
    FILE* fp1;
    fp=fopen("D:/bit.txt","r");
    fp1=fopen("D:/bitrec.txt","w");
     printf("Data stream received : \n");
    while((fscanf(fp,"%c",&ch)!=EOF))
    {
        printf("%c",ch);
        rec[i]=ch;
        i++;
    }
    fclose(fp);
    for(i=8;i<strlen(rec)-8;i++)
    {
        if(rec[i]=='0')
        {
            org[k]=rec[i];
            fprintf(fp1,"%c",rec[i]);
            k++;
            count=0;
        }
        else
        {
            count++;
            org[k]=rec[i];
            fprintf(fp1,"%c",rec[i]);
            k++;
            if(count==5)
            {
              i++;
              count=0;   
            }
        }
    }
    fclose(fp1);
    printf("Data stream : %s",org);


    return 0;
}