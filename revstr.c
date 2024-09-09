#include<stdio.h>
#include<string.h>
#include"isPrime.c"

int main(){
      char str[100];
      printf("Enter String: ");
      scanf("%s",str);

      char *s1 = str;
      char *s2 = str;

      while(*s2!='\0')
      s2++;
      s2--;

      int flag=1;

      while(s1<s2){
            char temp= *s1;
            *s1=*s2;
            *s2=temp;
            
            if(*s1!=*s2){
                  flag = 0;
            }
            s1++;
            s2--;
      }
      printf("%s\n",str);

      if(flag)
      printf("palindrom\n");
      else
      printf("not palindrom\n");

      int num;
      printf("Enetr a number: ");
      scanf("%d",&num);
      if(isPrime(num))
      printf("Prime\n");
      else
      printf("Non Prime\n");
      

      return 0;
}