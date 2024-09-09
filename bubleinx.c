#include<stdio.h>
int main(){
      int size,temp;
      printf("Enter size: ");
      scanf("%d",&size);
      int a[size];
      printf("Enter Array Elements:\n");
      for(int i=0; i<size; i++){
            scanf("%d",&a[i]);
      }
      int j =1;
      for(int i=0; i<size; i++){
            int count = size;
            for(int j=0; j<size;j++){
                  
                  if(a[i]>a[j]){
                        count--;
                  }
            }
           a[i]=count;
            
      }

      for(int i=0; i<size; i++){
            printf("%d ",a[i]);
      }

      return 0;
}