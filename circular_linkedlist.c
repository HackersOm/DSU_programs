#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;

};
struct Node* insert_at_beginning(struct Node* last,int val)
{
     struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
     newnode->data = val;
     newnode->next = last->next;
     last->next = newnode;
     return last;
}
void  traversal(struct Node * last)
{
     printf("Printing linked list\n");
     struct Node * ptr = (struct Node*)malloc(sizeof(struct Node));
     ptr = last->next;
     while(ptr != last)
    {
         printf("%d\n",ptr->data);
         ptr = ptr->next;
    }

}

struct Node *