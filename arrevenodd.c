#include<stdio.h>
int main(){
      int size;
      printf("Enter size: ");
      scanf("%d",&size);
      int a[size];
      printf("Enter Array Elements:\n");
      for(int i=0; i<size; i++){
            scanf("%d",&a[i]);
      }
      //  Tras
      // int *p1=a;
      // int *p2=(a+(size-1));

      // while(p1<p2){
      //       if(*p1%2 == 0){
      //             p1++;
      //             continue;
      //       }
      //       if(*p2%2==1){
      //             p2--;
      //             continue;
      //       }
      //       if(*p1%2==1 && *p2%2==0)
      //       {
      //             int temp = *p1;
      //             *p1 = *p2;
      //             *p2 = temp;
      //             p1++;
      //             p2--;
      //       }
      // }
      int e = 0;
       for(int i=0; i<size; i++){
            if(a[i]%2==0){
                  int temp=a[e];
                  a[e]=a[i];
                  a[i]=temp;
                  e++;
            }
            
      }
      for(int i=0; i<size; i++){
            printf("%d ",a[i]);
      }

      return 0;
}