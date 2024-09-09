#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a!=0)
    {
        if(a>0)
        {
            printf("%d is positive",a);
        }
        else
        {
            printf("%d is negetive",a);
        }
    }
    else
    {
        printf("entered number is zero");
    }
    return 0;
}