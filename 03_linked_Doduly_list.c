#include<stdio.h>
#include<stdlib.h>
struct Node {
    int Data;
    struct Node* prev ;
    struct Node* next;
};

 void traversal_first_to_last(struct Node* head){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr = head;
    while(ptr->next != NULL)
    {
        printf("the Element is :%d\n",ptr->Data);
        ptr = ptr->next;
    }
     free(ptr);
    
}
 void traversal_last_to_first(struct Node* head){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr = head;
    while(ptr->next != NULL){
        ptr = ptr->next;
    }
    while(ptr->prev != NULL){
        printf("The Element is :%d\n",ptr->Data);
        ptr = ptr->prev;
    }
    free(ptr);
    
}
int main(){
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *first = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));
    //  Declariation to head node

    head->Data = 45;
    head->next = first;
    head->prev = NULL;
    //  Declariation first to second node
    first->Data = 65;
    first->next = second;
    first->prev = head;
    //  Declariation second to third node
    second->Data = 43;
    second->next = third;
    second->prev = first;
    //  Declariation third to end node
    third->Data = 78;
    third->next = NULL;
    third->prev = second;
    // traversal_first_to_last(head);
    traversal_last_to_first(head);
    return 0;
}