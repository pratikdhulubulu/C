#include<stdio.h>
#include<math.h>
int main(){
      int num;
      printf("Eneter a Decimal number: ");
      scanf("%d",&num);

      int bin[32];
      char hex[8] = "00000000";
      int x=0,z;
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
      printf("\n");

      while(x<8){
            z = bin & 15;
            
            if(z>9){
                  z = 55+z;
            }
            else{
                  z += 48;
            }
            hex[x] = z;
            bin = bin >> 4;
            x++;
      }
     // for(int i = 0; i<10; i++){
       //     printf("%c",hex[i]);
     // }
     printf("%s",hex);
      return 0;

}