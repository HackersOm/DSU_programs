#include<stdio.h>
#include<conio.h>
void printarray(int arr[],int size){
     int i;
     for(i = 0 ;i<size;i++){
         printf("%d\n",arr[i]);
     }
}

 void InsertaionSort(int *arr,int size){
     int i,j,key;
     for(i = 1;i<=size-1;i++){
     key = arr[i];
     j = i -1;
     while(j>=0 && arr[j]<key){
          arr[j+1]=arr[j];
          j--;
     }
     arr[j+1] = key;
    }
}
int main(){
    int i,arr[10],size;
    printf("Enter array size\n");
    scanf("%d",&size);
    printf("Enter array Elements\n");
    for(i = 0;i<size;i++){
         scanf("%d",&arr[i]);

    }
     printf("Array Before Insertaion \n");
     printarray(arr,size);
     InsertaionSort(arr,size);
     printf("Array After Insertaion\n");
     printarray(arr,size);
     getch();
    return 0;
}