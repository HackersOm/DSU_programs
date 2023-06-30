#include <stdio.h>
#include <stdlib.h>

struct Node
{
     int Data;
     struct Node *next;
};

void linkListTraversial(struct Node *ptr)
{
     while (ptr != NULL)
     {
          printf("Element is :%d\n", ptr->Data);
          ptr = ptr->next;
     }
}
struct Node *Insert_At_beginning(struct Node *ptr, int data)
{
     struct Node *Newhead = (struct Node *)malloc(sizeof(struct Node));
     Newhead->Data = data;
     Newhead->next = ptr;
     return Newhead;
}
struct Node *Insert_At_last(struct Node *k, int data)
{
     struct Node *NewEnd = (struct Node *)malloc(sizeof(struct Node));
     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
     ptr = k;
     NewEnd->Data = data;
     while (ptr->next != NULL)
     {
          ptr = ptr->next;
     }
     ptr->next = NewEnd;
     NewEnd->next = NULL;
     return k;
}
struct Node* Insert_At_Index(struct Node* head,int data,int Index){
     struct Node* node = (struct Node*)malloc(sizeof(struct Node));
     struct Node* ptr= (struct Node*)malloc(sizeof(struct Node));
     node->Data = data;
     ptr = head;
     int i= 0;
     while(i!= Index-1){
          ptr = ptr->next;
          i++;
     }
     node->next = ptr->next;
     ptr->next = node;
     return head;
}
int main()
{
     struct Node *head = (struct Node *)malloc(sizeof(struct Node));
     struct Node *first = (struct Node *)malloc(sizeof(struct Node));
     struct Node *second = (struct Node *)malloc(sizeof(struct Node));
     struct Node *third = (struct Node *)malloc(sizeof(struct Node));
     //  Declariation to head node

     head->Data = 45;
     head->next = first;
     //  Declariation first to second node
     first->Data = 65;
     first->next = second;
     //  Declariation second to third node
     second->Data = 43;
     second->next = third;
     //  Declariation third to end node
     third->Data = 78;
     third->next = NULL;
     // head = Insert_At_beginning(head, 90);
     head = Insert_At_last(head,600);
     // head = Insert_At_Index(head,7,3);

     linkListTraversial(head);
     return 0;
}