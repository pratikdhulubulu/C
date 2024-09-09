#include<stdio.h>
int main(){
      int num;
      printf("Eneter a Decimal number: ");
      scanf("%d",&num);

      int bin[32];
      for(int i = 0; i<32; i++){
            bin[i]=0;
      }
      int i=31;
      while(num>0){
            bin[i]=num%2;
            num/=2;
            i--;
      }
      
      for(int i = 0; i<32; i++){
            printf("%d",bin[i]);
      }

      return 0;

}