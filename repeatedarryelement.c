#include<stdio.h>
int main()
{
int n,i,j,a[10];
printf("entre the size:");
scanf("%d",&n);
printf("entre the element:");
for (i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

for (i=0;i<n;i++)
{
  for (j=i+1;j<n;j++)
  {
      if(a[i]==a[j])
      printf("duplicate no is %d",a[i]);
  }
}
return 0;
}