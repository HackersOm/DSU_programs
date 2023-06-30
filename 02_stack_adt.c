#include<stdio.h>
#include<stdlib.h>

struct stack {
    int top;
    int *arr;
    int size;
};

int isEmpty(struct stack *ptr){
    if(ptr->top == -1){
        
         return 1;
    }
    else {
         return 0;
    }
}
int isFull(struct stack *ptr){
        if(ptr->top >= ptr->size-1){
            return 1;
        }
        else{
             return 0;
        }
}
void pop(struct stack *k ){
     if(isEmpty(k)== 1){
             printf("Stack Underflow\n");
     }
     else{
         int val = k->arr[k->top];
         k->top--;
         printf("Pop is successful removed %d from stack \n",val);
     }
}
void push(int val , struct stack *ptr){
      if(isFull(ptr)== 1){
           printf("Stack is Overflow can't insert %d\n ",val);

      }
      else{
          ptr->top ++;
          ptr->arr[ptr->top]=val;
          printf("push is successful %d is insert in stack \n",val);

      }

}
void stacktop(struct stack *ptr){
    printf("The top value of stack is %d of Index %d\n",ptr->arr[ptr->top],ptr->top);
}
void stackButtom(struct stack *ptr){
    printf("The Buttom value of stack is %d\n",ptr->arr[0]);
}

void peak(int i , struct stack *ptr){
    
    if(i > ptr->top + 1){
        printf("value is more than stack \n");
    }
    else{
        int result = ptr->arr[(ptr->top + 1) - i];
            printf("Peaked value is %d\n",result);
        }
     
}

int main(){
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
//     printf("Enter size of stack array \n"); 
//     scanf("%d",&s->size);
    s->size = 4 ;
    s->arr = (int *)malloc(s->size * sizeof(int));
    s->top = -1;
//     int result1 = isEmpty(s);
//     int result2 = isFull(s);
//     printf("Array before inserting Elements is Empyt or not : %d\n",result1);
//     printf("Array before inserting Elements is Full or not : %d\n",result2);
//     printf("Enter array Element \n");
//     for(int i = 0; i<=s->size; i++){
//          s->top++;
//          scanf("%d",&s->arr[s->top]);
//     }
//     printf("Entered array is \n");
//     for(int i = 0; i<=s->size; i++){
//          printf("%d ",s->arr[i]);
         
//     }
//     printf("\n");
//     result1 = isEmpty(s);
//     result2 = isFull(s);
//     printf("Array After inserting Elements is Empty or not : %d\n",result1);
//     printf("Array After inserting Elements is Full or not : %d\n",result2);
    push(24,s);
    push(32,s);   
    push(62,s);   
    push(22,s); 
    push(100,s);   
  
    // for(int i = 0; i<s->size;i++){
    //      printf("%d ",s->arr[i]);
    // }
    // printf("\n");
    // peak(1,s);
    stackButtom(s);
    stacktop(s);
    return 0;
}