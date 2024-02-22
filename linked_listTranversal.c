#include <stdio.h>
#include <stdlib.h>

struct node {
    int data ;
    struct node * next ;
} ;

void linkedlist(struct node *ptr){
    while(ptr != NULL){
        printf("element %d\n", ptr->data) ;
        ptr = ptr->next ;


    }
}



int main() {
 struct node *head ;
 struct node *second ;
 struct node *third ;
 struct node *fourth ;
 //memory allocation
 head = (struct node *)malloc(sizeof(struct node));
 second = (struct node *)malloc(sizeof(struct node));
 third = (struct node*)malloc(sizeof(struct node));
 fourth = (struct node *)malloc(sizeof(struct node));

 head-> data =7;
 head->next = second ;

 second->data=10;
 second->next = third;

 third->data = 11;
 third->next = fourth;

 fourth->data= 15;
 fourth->next =NULL;
 linkedlist(head);
 
 




 return 0 ;
}
