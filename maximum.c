#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("%d is maximun",a);
        }
        else
        {
            printf("%d is maximum",c);
        }
    }
    else
    {
        if(c>b)
        {
            printf("%d is is maximum",c);
        }
        else
        {
            printf("%d is maximum",b);
        }
    }
    return 0;
}