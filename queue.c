#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct queue
{
    int front, rear, size;
    int *arr;
};
void init(struct queue *ptr)
{
    ptr->front = ptr->rear = -1;
    printf("intialization is successfull\n");
}
int isfull(struct queue *ptr)
{
    if (ptr->rear == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isEmpty(struct queue *ptr)
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

void enqueue(struct queue *ptr, int val)
{
    if (isfull(ptr))
    {
        printf("Can't insert %d in in queue ,queue is Overflow!!\n", val);
    }
    else
    {
        if (ptr->rear == -1)
        {
            ptr->rear = ptr->front = 0;
            ptr->arr[ptr->rear] = val;
        }
        else
        {
            ptr->rear++;
            ptr->arr[ptr->rear] = val;
        }
        printf("insertion of %d value is successfull\n", val);
    }
}
int dequeue(struct queue *ptr)
{
    int val;
    if(ptr->front>ptr->rear )
    {
          ptr->front = ptr->rear = -1;
    }
    if (isEmpty(ptr))
    {
        printf("can't remove element ,queue is Underflow!!\n");
    }
    else
    {
        val = ptr->arr[ptr->front];
        ptr->front++;
        printf("Dequeue operation is successfully ,%d is removed from queue\n", val);
    }
}
void print(struct queue *ptr)
{
    int i;
    printf("print queue \n");
    for (i = ptr->front; i <= ptr->rear; i++)
    {
        printf("%d\n", ptr->arr[i]);
    }
}
int main()
{
    int i, val;
    struct queue *q = (struct queue *)malloc(sizeof(struct queue));
    init(q);
    printf("Enter size of queue\n");
    scanf("%d", &q->size);
    q->arr = (int *)malloc(q->size * sizeof(int));
    do
    {
        printf("\n\n\n1)Enqueue operation \n2)Dequeue operation\n3)Print Queue\n4)Quit\n\n\n");
        printf("Enter your choice:");
        scanf("%d", &i);
        switch (i)
        {
        case 1:
            printf("Enter a number to be inserted in Queue :");
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
    getch();
    return 0;
}