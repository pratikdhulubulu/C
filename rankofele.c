#include<stdio.h>
int main(){
      int size,temp ;
      printf("Enter size: ");
      scanf("%d",&size);

      int a[size];
      int R[size];

      printf("enter array elements:\n");

      for(int i=0;i<size;i++)
      {
            scanf("%d",&a[i]);
      }
      for(int i =0; i<size;i++){
            for(int j=0; j<size-1; j++){
                  if(a[i]>a[j]){
                        temp=a[i];
                        a[i]=a[j];
                        a[j]=temp;
                  }
            }
            
      }

      for(int i=0;i<size;i++)
      {
            printf("%d ",a[i]);
      }

      return 0;
}