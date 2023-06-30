#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int *arr;
    int top;
    int size;
};
int isEmpty(struct stack *ptr)
{
    if (ptr->top < 0)
    {
        return 1;
    }
    return 0;
}
int isFull(struct stack *ptr)
{
    if (ptr->top >= (ptr->size - 2))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    printf("Hello world\n");
    int a = 0;
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->top = -1;
    s->size = 6;
    s->arr = (int *)malloc(s->size * sizeof(int));
    printf("Enter Array elements \n");

    for (int i = 0; i < (s->size - 1); i++)
    {
        scanf("%d", &s->arr[i]);
        s->top++;
    }
    printf("Enter 1 for check the array is full or not \n");
    printf("Enter 2 for check the array is empty or not \n");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        if (isFull(s) > 0)
        {
            printf("Array is Full \n");
        }
        else
        {
            printf("Array is not Full\n");
        }
        break;
    case 2:
        if (isEmpty(s) > 0)
        {
            printf("Array is empty\n");
        }
        else
        {
            printf("Array is not empty\n");
        }
        break;
    default:
        printf("Worng Number\n");
        break;
    }
    return 0;
}