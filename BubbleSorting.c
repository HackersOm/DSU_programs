#include<stdio.h> 
void Bubblesort(int *arr,int size){
     int i,j,temp;
     for(i=0;i<size;i++){
          for(j=0;j<size-i-1;j++){
               if(arr[i]>arr[j+1]){
                    temp = arr[i];
                    arr[i] = arr[j+1];
                    arr[j+1] = temp;
               }
          }
     }
}
int main(){
    int i,arr[10],size;
    printf("Enter size of array \n");
    scanf("%d",&size);
    printf("Enter array elements \n");
    for(i = 0;i<size;i++){
         scanf("%d",&arr[i]);
    }
    printf("Entered array before sorting \n");
    for(i=0;i<size;i++){
         printf("%d\n",arr[i]);
    }
    Bubblesort(arr,size);
    printf("Entered array after sorting \n");
    for(i=0;i<size;i++){
         printf("%d\n",arr[i]);
    }
     return 0;
}