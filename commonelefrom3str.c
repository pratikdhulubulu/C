#include<stdio.h>
#include<string.h>
int main(){
      char a1[100];
      char a2[100];
      char a3[100];
      printf("Enter String 1: ");
      scanf("%s",a1);
      printf("Enter String 2: ");
      scanf("%s",a2);
      printf("Enter String 3: ");
      scanf("%s",a3);
      // int l = (strlen(a1)>strlen(a2)&&strlen(a1)>strlen(a3))? strlen(a1):(strlen(a2)>strlen(a3))?strlen(a2):strlen(a3);
      // printf("%d\n",l);
      // for(int i= 0; i< strlen(a1);i++){
            
      //      for(int j = 0; j<strlen(a2); j++){
      //             if(a1[i]==a2[j]){
      //             for(int k = 0; k<strlen(a3); k++){
      //                   if(a2[j]==a3[k])
      //                         printf("%c ",a3[k]);
      //             }
      //             }
      //      }
      // }
      int i=0,j=0,k=0;
      int c=0;
      while(i!=strlen(a1)){
            if(a1[i]==a2[j]){
                  if(a2[j]==a3[k]){
                        printf("%c\n",a1[i]);
                        i++;
                        j=0;
                        k=0;
                  }
                  else{
                        k++;
                        if(k==strlen(a3)){
                        i++;
                        j=0;
                        k=0;
                        }
                  }
            }
            else{
                  j++;
                  if(j==strlen(a2)){
                  i++;
                  j=0;
                  k=0;
                  }

            }
            c++;

      }
      printf("%d",c);
      return 0;
}