
#include <stdio.h>
struct ListNode{
    int data;
    struct ListNode* next;
}

PRITNLIST(struct ListNode* n){
    while(n!=NULL){
        printf("%d\t",n->data);
        n=n->next;
    }
}
int main()
{
    struct ListNode* head=NULL;
    struct ListNode* second=NULL;
    struct ListNode* third=NULL;
    
    head =(struct ListNode*) malloc(sizeof(struct ListNode));
    second =(struct ListNode*) malloc(sizeof(struct ListNode));
    third=(struct ListNode*) malloc(sizeof(struct ListNode));
    
    head->data=12;
    head->next=second;
    
    second->data=56;
    second->next=third;
    
    third->data=78;
    third->next=NULL;
    PRITNLIST(head);

    return 0;
}
