#include<stdio.h>
#include<string.h>

void insertion_o(char org[],char flag[])
{ 
    int i;
    for(i=strlen(org);i>0;i--)
    {
        org[i]=org[i-1];
    }
    org[0]='1';

    strcat(org,flag);
    strcat(flag,org);
    printf("Data stream with parity is :\n%s",flag);

    FILE* fp;
    fp = fopen("D\:parity.txt","w");
    for(i=0; i<strlen(flag); i++)
    {
        fprintf(fp,"%c",flag[i]);
    }
    fclose(fp);
}

void insertion_e(char org[],char flag[])
{   
    int i;
    for(i=strlen(org);i>0;i--)
    {
        org[i]=org[i-1];
    }
    org[0]='0';
    strcat(org,flag);
    strcat(flag,org);
    printf("Data stream with parity is :\n%s",flag);
    
    FILE* fp;
    fp = fopen("D\:parity.txt","w");
    for(i=0; i<strlen(flag); i++)
    {
        fprintf(fp,"%c",flag[i]);
    }
    fclose(fp);
}

int main()
{
    char org[100]={},flag[8]="01111110";
    int i=0,count1=0;
    
    printf("Enter data stream :\n");
    scanf("%s",&org);

    for(i=0;i<strlen(org);i++)
    {
        if(org[i]=='1')
        {
            count1++;
        }
    }

    if(count1%2==0)
    {
        insertion_e(org,flag);
    }
    else
    {
        insertion_o(org,flag);
    }
    return 0;
}