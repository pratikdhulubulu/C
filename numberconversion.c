#include<stdio.h>
void decToBin(int n){
      char bin[32];
      for(int i=31; i>=0; i--){
            bin[i] = (n%2)+48;
            n/=2;
      }
      for(int i=0; i<32; i++){
            printf("%c ",bin[i]);
      }
}

void decToOct(int n){
      char bin[32];
      for(int i=31; i>=0; i--){
            bin[i] = (n%8)+48;
            n/=8;
      }
      for(int i=0; i<32; i++){
            printf("%c ",bin[i]);
      }
}

void decToHex(int n){
      char bin[32];
      for(int i=31; i>=0; i--){
            int d =(n%16);
            if(d>9)
            bin[i] = d+55;
            else
            bin[i] = d+48;
            n/=16;
      }
      for(int i=0; i<32; i++){
            printf("%c ",bin[i]);
      }
}

int main(){
      int num;
      printf("Enter a number: ");
      scanf("%d",&num);
      decToBin(num);
      printf("\n");
      decToOct(num);
      printf("\n");
      decToHex(num);
}