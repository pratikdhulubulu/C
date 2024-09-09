#include<stdio.h>
int main()
{
	int i,j,k,m,n,t,x,step=0,div=1,max,a[5],b[10][10],c[10];
	printf("enter array elements\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<5;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("max is %d\n",max);
    for(i=0;i<5;i++)
    {
        while(max>0)
        {
            step++;
            max=max/10;
        }
    }
    for(i=0;i<step;i++)
    {
        for(x=0;x<10;x++)
        c[x]=0;
        for(j=0;j<5;j++)
        {
            n=(a[j]/div)%10;
            m=c[n];
            c[n]++;
            b[n][m]=a[j];
        }
        k=0;
        for(t=0;t<10;t++)
        {
            for(j=0;j<c[t];j++)
            {
                a[k]=b[t][j];
                k++;
            }
        }
        div=div*10;
    }
    printf("sorted array is:\n");
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    
}