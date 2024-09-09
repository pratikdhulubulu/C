#include<stdio.h>
int main(){
    int count=0,a,b;
    printf("Enter length ");
    scanf("%d",&a);
    printf("Enter width ");
    scanf("%d",&b);
    while(a>=1){
        while(a>b){
            int c =a-b;
            a=a-c;
            count++;
            printf("\n%d%d",a,b);
            a=c;
        }
    while(a<=b){
        int c =b-a;
        b=b-c;
        count++;
        printf("\n%d%d",a,b);
        b=c;
        if(a==0||b==0)
        goto x;
        }
    }
  x:  printf("\nnumber of square %d",count);

    return 0;

}