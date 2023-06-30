#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct Queue
{
    int front, rear;
    int size, *arr;
};
void init(struct Queue *ptr)
{
    ptr->rear = -1;
    ptr->front = -1;
    printf("Initializition is successfull!! ");
}
int isFull(struct Queue *ptr)
{
     if ((ptr->front == ptr->rear + 1)||(ptr->front == 0 && ptr->rear == ptr->size -1))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isEmpty(struct Queue *ptr)
{
    if (ptr->front == -1)
    {
        return 1;
    }
   
    else
    {
        return 0;
    }
}
void enqueue(struct Queue *ptr, int val)
{
    if (isFull(ptr))
    {
        printf("Can't insert element in queue Queue is OverFlow\n");
    }
    else
    {
        if (ptr->front == -1) ptr->front = 0;
        
        ptr->rear = ((ptr->rear + 1)%(ptr->size));
        ptr->arr[ptr->rear] = val;
        printf("Insertion of %d element is successfull \n!!", val);
    }
}
void dequeue(struct Queue *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Can't remove element from queue because queue is Underflow !! \n ");
    }
    else
    {
       int val;
       val = ptr->arr[ptr->front];
          if(ptr->front == ptr->rear)
          {
              ptr->front = ptr->rear = -1;

          }
          else{
              ptr->front = ((ptr->front + 1)%(ptr->size));

          }
          printf("%d element is removed from Queue\n",val);
    }
}
void print(struct Queue *ptr)
{
    int i;
    printf("printing Queue\n\n");
    if(isEmpty(ptr)) printf("Queue is Underflow\n");
    else{
    for (i = ptr->front ; i != ptr->rear ; i=((i+1)%(ptr->size)))
    {
        printf("%d\n", ptr->arr[i]);
    }
    }
     
}

int main()
{
    int i, val;
    struct Queue *q = (struct Queue *)malloc(sizeof(struct Queue));
    printf("Enter size of Queue\n");
    scanf("%d", &q->size);
    q->arr = (int *)malloc(q->size * sizeof(int));
    init(q);
    do
    {
        printf("\n\n\n1)Enqueue\n2)Dequeue\n3)Print\n4)Exit\n\n\n");
        printf("Enter your choice:");
        scanf("%d", &i);
        switch (i)
        {
        case 1:
            printf("Enter element :");
            scanf("%d", &val);
            enqueue(q, val);
            break;
        case 2:
            dequeue(q);
            break;
        case 3:
            print(q);
            break;
        }
       
    } while (i <= 3);
    return 0;
}