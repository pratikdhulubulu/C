#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char org[100]={},st[100]={},flag[]="01111110",ch;
    int i=0,j=0,k=0,count=0;
    printf("Enter data stream:\n");
    scanf("%s",&org);
    for(i=0;i<strlen(org);i++)
    {
        if(org[i]=='0')
        {
            st[k]=org[i];
            k++;
            count=0;
        }
        else
        {
            count++;
            st[k]=org[i];
            k++;
            if(count==5)
            {
                st[k]='0';
                k++;
                count=0;
            }
        }
    }
    printf("Data stream after bit stuffing: %s",st);


    return 0;
}