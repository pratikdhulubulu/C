#include<stdio.h>
int main()
{
    int a[10];
    int i,j,k,n,t;
    printf("enter size of array\n");
    scanf("%d",&n);
    printf("enter array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(a[i]<a[j])
            {
                t=a[i];
                for(k=i;k>j;k--)
                {
                    a[k]=a[k-1];
                }
                a[j]=t;
            }
        }
    }
    printf("array elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}