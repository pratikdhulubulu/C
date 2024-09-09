#include<stdio.h>
int main()
{
      int n;
      printf("Enter number: ");
      scanf("%d",&n);
      int n1=0,n3=0;
      int n2=1;
      
      while(n--)
      {
           printf("%d ",n3);
           n1=n2; 
           n2=n3;
           n3=n1+n2;
      }
      return 0;
}