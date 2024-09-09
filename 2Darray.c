#include<stdio.h>
int main()
{
    int n,m,i,j;
    printf("enter array size as m*n :\n");
    scanf("%d",&m);
    scanf("%d",&n);
     int a[m][n];
    printf("enter array elemets;\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }  
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }  
    int x;
    printf("enter search element:\n");
    scanf("%d",&x);
    int z=0;
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            
            if(a[i][j]==x)
            {
            printf("element found at position %d\t%d\n",i,j);
            z=1;
            }
        }
       
    }  
     if(z==0)
            {
            printf("element not found");
            }
    return 0;
}