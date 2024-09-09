#include<stdio.h>
int main()
{
      char st[10];
      printf("Enter string: ");
      scanf("%s",&st);
      int i=0;

      while(st[i]!='\0')
      {

           if(st[i]==st[-(i+1)])
            {

            }
           else
           {
            printf("no palindrom ");
            return 0;
           }
           i++;
      }
      printf("palindrom");
      return 0;
}