#include <stdio.h>
#include <stdlib.h>

struct node {
    int data ;
    struct node * next ;
};

void linkedlist(struct node *ptr){
    while(ptr!=NULL){
        printf("element %d \n",ptr->data);
        ptr =ptr->next;
    }
}
//for insertion at first
struct node* insertAtFirst(struct node * head, int data){
    struct node * ptr =(struct node *)malloc(sizeof(struct node));
    ptr->next =head;
    ptr->data =data;
    return ptr;
}
//for insertion at an index
struct node* insertAtmid(struct node * head, int data,int index){
    struct node * ptr =(struct node *)malloc(sizeof(struct node));
    struct node *p =head;
    int i= 0;
    while(i!= index-1){
      p=p->next;
      i++ ;
    }
    ptr->data =data;
    ptr->next =p->next;
    p->next = ptr;
    return head;
    

}
//for insertion at end
struct node* insertAtend(struct node * head, int data ){
    struct node * ptr =(struct node *)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next= NULL;
    struct node *p = head;
  
    while(p->next != NULL -1){
     p= p->next ;
    }
    p->next=ptr;
    // ptr->data=data;
    // ptr->next = NULL;
    return head;


}
struct node* insertAtend(struct node * head, int data){
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = NULL;
    
    struct node *p = head;
    while(p->next != NULL){
        p = p->next;
    }
    p->next = ptr;
    
    return head;
}



int main() {
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node *)malloc(sizeof(struct node));
    second =(struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc (sizeof(struct node));
    
    head->data= 7;
    head->next = second;

    second->data= 9;
    second->next = third;

    third->data=15;
    third->next=fourth;

    fourth->data=20;
    fourth->next = NULL;

  printf("linked list before \n");  
  linkedlist(head);
  printf("linkedlist after \n");
  // head= insertAtFirst(head,69); for insertion at front 
  //head =insertAtmid(head,77,3); for insertion at mid
  head= insertAtend(head,33);
  linkedlist(head);
  return 0;
 
}