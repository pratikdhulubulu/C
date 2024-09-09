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
            for(int j=i+1; j<size;j++){
                  if(a[i]==a[j])
                  a[j]=0;
                  if(a[i]<a[j]){
                        temp =a[j];
                        a[j]=a[i];
                        a[i]=temp;
                  }
                  

            }     
      }

      for(int i=0; i<size; i++){
            printf("%d ",a[i]);
      }

      return 0;
}