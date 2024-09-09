#include<stdio.h>
#include<math.h>

int arm(int num){
      int sum=0,count=0;
      int temp = num;

      while(temp){
            temp /=10;
            count++;
      }

     while(num){
      int digit = num%10;
      int x = pow(digit,count);
      sum +=x;
      num/=10;
     }
      return sum;
}
int main(){

      int num;
      
      printf("Enter number: ");
      scanf("%d",&num);
      if(num==arm(num))
      printf("arm");
      else
      printf("no arm");
    
   

      return 0;
}