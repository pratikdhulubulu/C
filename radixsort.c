#include<stdio.h>
int main()
{
    int a[5],i,j,m,n,c[10],max,step=0,t,b[10][5],k,x,div=1;
    printf("enter size of array:\n");
    scanf("%d",&n);
    printf("emter array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     printf("array elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    max=a[0];
	for(i=0;i<5;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("\nMax is %d\n",max);
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
	printf("Sorted array is: \n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}

return 0;
}