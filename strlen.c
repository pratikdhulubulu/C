#include<stdio.h>
int main(){
      char name[100];
      int len = 0;
      printf("Enter name: ");
      scanf("%s",&name);
      while(name[len] != '\0')len++;
      printf("%d",len);
      return 0;
}