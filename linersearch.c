#include<stdio.h>
int main()
{
     int n,i,element;
    int a[100];
    printf("enter array size:\n");
    scanf("%d",&n);
    printf("enter array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("array elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nenter search element:\n");
    scanf("%d",&element);
    for(i=0;i<n;i++)
    {
        if(a[i]==element)
        {
            printf("element found at index:%d",i);
            return 0;
        }
    }
    printf("\nelement not found\n");
    return 0;
}
