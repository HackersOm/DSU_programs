#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void selection_sort(int arr[],int size){
       int temp,i,j,key;
       for(i=0;i<size;i++){
            key = arr[i];
            for(j = i+1;j<size;j++){
                  if(key>arr[j]){
                        key =arr[j];
                  }   
            }
            temp = arr[i];
            arr[i] = key;
            key = arr[i];
       }
}

int main(){ 
    int i,size;
    printf("Enter the size of array\n");
    scanf("%d",&size);
    int *arr =(int*)malloc(size*sizeof(int));
    printf("Enter array element\n");
    for(i = 0 ;i<size;i++){
          scanf("%d",&arr[i]);

    }
    printf("Entered array element before is \n");
    for(i = 0 ;i<size;i++){
          printf("%d\n",arr[i]);

    }
   selection_sort(arr,size);
    printf("Entered array element after is \n");
    for(i = 0 ;i<size;i++){
          printf("%d\n",arr[i]);

    }
    getch();
}