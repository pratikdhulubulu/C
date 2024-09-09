#include<stdio.h>
int main()
{
    int a[10];
    int i,n,p;
    printf("enter size of array:\n");
    scanf("%d",&n);
    printf("emter array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nenter position at element is inserting\n");
    scanf("%d",&p);
    // if(p==n)
    // {
    // printf("enter value for insert at end:\n");
    // scanf("%d",&a[n]);
    // }
    // if(p==0)
    // {
    //     printf("enter element:\n");
    //     for(i=n;i>0;i--)
    //     {
    //         a[i]=a[i-1];
    //     }
    //     scanf("%d",&a[0]);
    // }
    // else
    // {
        printf("enter element:\n");
        for(i=n;i>=p;i--)
        {

            a[i]=a[i-1];
        }
        scanf("%d",&a[p]);
    //}
    printf("\n array elements are:\n");
    for(i=0;i<=n;i++)
    {
        printf("%d\t",a[i]);
    }
return 0;
}