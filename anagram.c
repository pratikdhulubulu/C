#include<stdio.h>
#include<string.h>
int main(){
      char str1[100];
      char str2[100];
      printf(";Enetr String: ");
      scanf("%s",str1);
      printf(";Enetr String: ");
      scanf("%s",str1);
      int l1 = strlen(str1);
      int l2 = strlen(str2);

      if(l1==l2){
            for(int i=0; i<l1; i++){
                  for(int j=0; j<(l1-i); j++){
                        if(str1[j]>str1[j+1]){
                              char temp =str1[j];
                              str1[j]=str1[j+1];
                              str1[j+1]=temp;
                        }
                        if(str2[j]>str2[j+1]){
                              char temp =str2[j];
                              str2[j]=str2[j+1];
                              str2[j+1]=temp;
                        }

                  }
            }
            if(strcmp(str1,str2)==0)
            printf("Anagrams\n");
            else
            printf("Not Anagrams\n");

      }
      else{
            printf("Not Anagrams\n");
      }


      return 0;
}