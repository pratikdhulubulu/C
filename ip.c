#include<stdio.h>
int main()
{
    int a,b,c,d,s[8]={},i=0,j=0;
    x:printf("Enter 4 bytes: ");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a<=255 && b<=255 && c<=255 && d<=255)
    {
        printf("\nIP Address is: %d.%d.%d.%d",a,b,c,d);
        for(i=0;a!=0;i++)
        {
            s[i]=a%2;
            a/=2;
        } 
        while(i<=7)
        {
            s[i]=0;
            i++;
        }
        printf("\nBinary number formed is:");
        for(j=7;j>=0;j--)
        {
            printf("%d",s[j]);
        }
        printf("\nFirst Nibble is:");
        for(j=7;j>3;j--)
        {
            printf("%d",s[j]);
        }  
        if(s[7]==0)
        printf("\nIP Adrrese is in Class A");
        else if(s[6]==0)
        printf("\nIP Adrrese is in Class B");
        else if(s[5]==0)
        printf("\nIP Adrrese is in Class C");
        else if(s[4]==0)
        printf("\nIP Adrrese is in Class D");
        else
        printf("\nIP Adrrese is in Class E");
    }
    else
    {
        printf("\nInvalid IP Adrrese Enter correct ip address");
        goto x;
    }
    
    return 0;
}