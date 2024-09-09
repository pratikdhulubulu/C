#include<stdio.h>
int main(){
      char str[100];
      
      printf("Enter a String: ");
      scanf("%s",str);
      int arr[26];
      for(int i=0; i<26; i++){
            arr[i]=0;
      }

      for(int i=0; str[i]!='\0'; i++){
            int l = 0;
            if(str[i]<97){
                  l= str[i] - 'A';
                  arr[l]++;
            }
            else{
                  l= str[i] - 'a';
                  arr[l]++;
            }
            
      }
      char a ='A';
      for(int i=0; i<26; i++){
            if(arr[i]!=0){
                  printf("%c => %d\n",a,arr[i]);
            }
            a++;

      }
      
      return 0;
}
