#include<stdio.h>
#include<math.h>
int main(){
      int num;
      printf("Eneter a Octal number: ");
      scanf("%d",&num);
      int temp = num,dec=0;
     
      int i=0;
      while(num){
            dec+= (num%10)*pow(8,i);
            i++;
            num/=10;
      }
      printf("Decimal number is: %d",dec);

      
      return 0;

}