/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
    };
void linkedlisttraversal(struct Node* ptr){
    while(ptr!=NULL){
    printf("Element : %d\n",ptr->data);
    ptr=ptr->next;
    }
}   

struct Node* deleteFirst(struct Node* head){
    struct Node* ptr=head;//(struct Node*)malloc(sizeof(struct Node));
    //ptr=head;
    head=head->next;
    free(ptr);
    return head;
    }
struct Node* deleteIndex(struct Node* head,int index){
    struct Node* p=head;//(struct Node*)malloc(sizeof(struct Node));
    struct Node* q=head->next;
    for(int i=0;i<index-1;i++){
        p=p->next;
        q=q->next;
        
    }
    
    p->next=q->next;
    free(q);
    return head;
    }
struct Node* deleteLastnode(struct Node* head){
    struct Node* p=head;//(struct Node*)malloc(sizeof(struct Node));
    struct Node* q=head->next;
    while(q->next!=NULL){
        
        q=q->next;
        p=p->next;
    }
    p->next=NULL;
    free(q);
    return head;
    }
struct Node* deleteKey(struct Node* head, int data){
    struct Node* p=head;//(struct Node*)malloc(sizeof(struct Node));
    struct Node* q=head->next;
    while((q->data!=data) &&(q->next!=NULL)){
        
        q=q->next;
        p=p->next;
    }
    p->next=q->next;
    free(q);
    return head;
    }
int main()
{   struct  Node* head;
    struct  Node* second;
    struct  Node* third;
    struct  Node* fourth;
    //allocate memory for the three nodes
    head=(struct  Node*)malloc(sizeof(struct Node));
    second=(struct  Node*)malloc(sizeof(struct Node));
    third=(struct  Node*)malloc(sizeof(struct Node));
    fourth=(struct  Node*)malloc(sizeof(struct Node));
    //first node and second node
     head->data=10;
     head->next=second;
    //second node and third node
     second->data=7;
     second->next=third;
     
     //second node and third node
     third->data=89;
     third->next=fourth;
     
     //third and foruth node
     fourth->data=61;
     fourth->next=NULL;
     
     
     printf("Linkedlist before delection:\n");
     linkedlisttraversal(head);
     
     //head=deleteFirst(head);
     //head=deleteIndex(head,2);
     //head=deleteLastnode(head);
     head=deleteKey(head,7);
     printf("Linkedlist after deletion:\n");
     linkedlisttraversal(head);
     

    return 0;
}
