#include<stdio.h>
int sortingSelection(int *arr,int n){
     int index,temp;
     for(int i = 0;i<n-1;i++){
         index = i;
         for(int j = i+1;j<n;j++){
             if(arr[index]>arr[j]){
                 index = j;
             }
         }
          temp = arr[i];
          arr[i] = arr[index];
          arr[index] = temp;
     }
}
int main(){
      int arr [] = {53,5,4,3,1,2,43,0};
      int n = sizeof(arr)/sizeof(int);
      printf("Array before sorting \n");
      for (int  i = 0; i < n; i++)
      {
          printf("%d ",arr[i]);
      }
      printf("\n");
      sortingSelection(arr,n);
      printf("Array after sorting \n");
      for (int  i = 0; i < n; i++)
      {
          printf("%d ",arr[i]);
      }
      printf("\n");


    return 0;
}