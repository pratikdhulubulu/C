#include<stdio.h>
#include<string.h>
int main(){
      char str[100];
      char substr[100];
      printf("Enter a String: ");
      scanf("%s",str);
      printf("Enter a subString: ");
      scanf("%s",substr);
      
      char *s1 =str;
      char *s2 =substr;
      int l = strlen(substr);
      int k = 0;
      while(*s1!='\0'){
            k++;
            while(*s2!='\0'){
                  if(*s1==*s2){
                        s1++;
                        s2++;
                        if(*s1==substr[l-1] && *(s2+1)=='\0'){
                              printf("substring present : %s",substr);
                              break;
                        }
                  }
                  else{
                        s2=substr;
                        s1+=k;
                  }
            }  
      }

      return 0;
}