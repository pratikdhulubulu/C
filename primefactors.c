#include<stdio.h>
int isPrime(int n){
      if(n==1)
      return 0;
      if(n==2)
      return 1;

      for(int i=2; i<=n/2; i++){
            if(n%i==0){
                  return 0;
            }
      }
      return 1;
}
int main(){
      int num;
      printf("Enter a number: ");
      scanf("%d",&num);
      for(int i=1; i<=num/2; i++){
            if(isPrime(i) && num%i==0)
            printf("%d ",i);
      }      
      return 0;
}