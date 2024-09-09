#include<stdio.h>
int main(){

      int num;
      printf("Enter  a number: ");
      scanf("%d",&num);
      if(num==1){
            printf("niether prime nor composite");
            return 0;
      }
      for(int i=2; i<= num/2;i++){
            if(num%i==0){
                  printf("non prime");
                  return 0;
            }
      }
      printf("prime");

      return 0;
}