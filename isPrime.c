#include<stdio.h>
int isPrime(int num){
       if(num == 1)
            return 0;
      for(int i=2; i<= num/2;i++){
            
            if(num%i==0){
              return 0;
            }
      }
      return 1;
}
// int main(){

//       int num1,num2;
//       printf("Enter two number: ");
//       scanf("%d %d",&num1,&num2);
      
//       for(int i=num1; i<=num2;i++){
           
//             if(isPrime(i))
//             printf("%d ",i);
//       }

//       return 0;
// }