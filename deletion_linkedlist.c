#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node * next ;
};

void linkedlist(struct node *ptr){
    while(ptr != NULL){
        printf("element %d\n", ptr->data);
        ptr = ptr->next ;
    }
}
//case 1 deleteing the first node
struct node * deletingthefirst(struct node * head){
    struct node * ptr = head;
    head= head->next;
    free(ptr);
    return head ;

}


//case 2 delete at index 
struct node * deletingtheindex(struct node * head, int index){
    struct node * p = head;
    struct node * q = head->next;
    for(int i=0 ; i<index-1 ; i++){
        p=p->next;
        q= q->next;
    }
    p->next = q->next;
    free(q);
    
    return head ;
}


// Case 3: Deleting the last element
struct Node * deleteAtLast(struct Node * head){
    struct Node *p = head;
    struct Node *q = head->next;
    
    if (q == NULL) {
        free(p);
        return NULL;
    }

    while(q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    
    p->next = NULL;
    free(q);
    return head;
}






int main(){
 struct node *head;
 struct node *second ;
 struct node *third;
 struct node *fourth;

 head = (struct node *)malloc(sizeof(struct node));
 second = (struct node *)malloc(sizeof(struct node));
 third = (struct node *)malloc(sizeof(struct node));
 fourth = (struct node *)malloc(sizeof(struct node));

 head->data =10;
 head->next= second;

 second->data=12;
 second->next=third;

 third->data = 15;
 third-> next = fourth;

 fourth->data =20;
 fourth->next = NULL;
 printf("before:\n");
 linkedlist(head);
 printf("after\n");
 //deletingthefirst(head);
 //head = deletingtheindex(head,3);
 head = deleteAtLast(head);
 linkedlist(head);


    return 0 ;
}