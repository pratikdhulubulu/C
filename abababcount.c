#include<stdio.h>
#include<string.h>
int main(){
      char str[100];
      int count=0;
      printf("Enter a String: ");
      scanf("%s",str);
      
      for(int i = 0;str[i]!='\0';i++)
      {
            if(str[i]-str[i+1]==-1){
                  count++;
            }
      }
      printf("%d",count);

      return 0;
}