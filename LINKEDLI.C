#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Node
{
   int data;
   struct Node *next;
};
struct Node* insert_at_last(struct Node*head,int val)
{ struct Node*q = (struct Node*)malloc(sizeof(struct Node));
  struct Node*ptr = (struct Node*)malloc(sizeof(struct Node));
  ptr = head;
  q->data = val;
  while (ptr->next != NULL)
  {
     ptr = ptr->next;
  }
  ptr->next = q;
  q->next = NULL;
  printf("Insertion of %d element is successfull!!",val);
  return head;
}
struct Node* insert_at_index(struct Node*head,int val,int index)
{  int i;
   struct Node *ptr = head;
   struct Node *q = (struct Node*)malloc(sizeof(struct Node));
   q->data = val;
   for(i = 0 ;i<=index-1;i++)
   {
     ptr = ptr->next;
   }
   q->next = ptr->next;
   ptr->next = q;
   return head;
}
struct Node* insert_at_beginning(struct Node*head,int val)
{
  struct Node*ptr = head;
  ptr->data = val;
  ptr->next = head->next;
  head->next = ptr;
  return head;
}
struct Node* delete_at_last(struct Node*head)
{
  struct Node*p =(struct Node*)malloc(sizeof(struct Node));
  struct Node*ptr = (struct Node*)malloc(sizeof(struct Node));
  ptr = head;
  p = head->next;
  while(p->next != NULL)
  {
     ptr = ptr->next;
     p =ptr->next;
  }
   ptr->next = NULL;

   printf("deletion of %d element is successfull!!",p->data);
   free(p);
  return head;
}
struct Node* delete_at_index(struct Node*head,int index)
{  int i;
   struct Node *ptr =(struct Node*)malloc(sizeof(struct Node));
   struct Node *p = (struct Node*)malloc(sizeof(struct Node));
   ptr = head;
   p = head->next;
   for(i = 0 ;i<=index-1;i++)
   {
     ptr = ptr->next;
     p  =p->next;
   }
   ptr->next = p->next;
   free(p);
   return head;
}
struct Node* delete_at_beginning(struct Node*head)
{
  struct Node*ptr = (struct Node*)malloc(sizeof(struct Node));
  struct Node*p = (struct Node*)malloc(sizeof(struct Node));
  ptr = head;
  p  = head->next;
  ptr->next = p->next;
  free(p);
  return head;
}
void traversial(struct Node *head)
{  struct Node* p = head->next;

   while(p->next !=NULL)
   {
      printf("%d\n",p->data);
      p = p->next;
   }
   printf("%d\n",p->data);
}
int main()
{
   int i =0 ,val,index;
   struct Node*head =(struct Node*)malloc(sizeof(struct Node));
   head->next = NULL;
   //clrscr();
   do{
   printf("\n\n\n1)Insertion \n 2)Deletion \n3)traversial\n\n\n");
   printf("Enter your choice :");
   scanf("%d",&i);
   if(i==1)
   {
      printf("1)Insert at last\n2)Insert at index\n3)Insert at beginning\n");
      scanf("%d",&i);
      switch(i)
      {
	case 1 :
		   printf("Enter value :");
		   scanf("%d",&val);
		   head = insert_at_last(head,val);
		   break;
	case 2:
		   printf("Enter value :");
		   scanf("%d",&val);
		   printf("Enter index :");
		   scanf("%d",&index);
		   head = insert_at_index(head,val,index);
		   break;
	case 3:
		   printf("Enter value :");
		   scanf("%d",&val);
		   head = insert_at_beginning(head,val);
		   break;
      }
    }
    else if(i == 2)
    { printf("1)delete at last\n2)delete at index\n3)delete at beginning\n");
      scanf("%d",&i);
      switch(i)
      {
	case 1 :

		   head = delete_at_last(head);
		   break;
	case 2:
		   printf("Enter index :");
		   scanf("%d",&index);
		   head = delete_at_index(head,index);
		   break;
	case 3:
		   head = delete_at_beginning(head);
		   break;
      }
    }

   else if(i == 3)
   {  printf("printing linked list\n");
      traversial(head);
   }
 }while(i<=3);
   getch();
   return 0;
}

