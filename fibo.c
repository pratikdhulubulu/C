#include<stdio.h>
int main(){
      int num;
      printf("Eneter a Decimal number: ");
      scanf("%d",&num);
      // 0 1 1 2 3 5 8 13

      int n1= 0,sum=0;
      int n2= 1;

      while(num>1){
            
            n1 =n2;
            n2=sum;
            sum = n1 +n2;
            num--;
      }
      printf("%d ",sum);


      return 0;

}