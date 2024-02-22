#include <stdio.h>
#include <stdlib.h>

struct stack {
    int size;
    int top ;
    int * arr ;
};

int isEmpty(struct stack* ptr){
    if(ptr->top == -1){
        return 1;
    }
    else {
        return 0;
    }
}

int isFull(struct stack *ptr){
    if(ptr->top == ptr->size - 1){
        return 1;
    }
    else {
        return 0 ;
    }
}
void push(struct stack *ptr , int val){
    if(isFull(ptr)){
        printf("stack overflow\n");
    }
    else {
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}
// for peek
int peek(struct stack* sp, int i){
    int arrayInd = sp->top -i + 1;
    if(arrayInd < 0){
        printf("Not a valid position for the stack\n");
        return -1;
    }
    else{
        return sp->arr[arrayInd];
    }
}


int main (){
    struct stack *s = (struct stack *)malloc(sizeof(struct stack)); // Allocate memory

    s->size = 80;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));
    //manually pushing element
    // s->arr[0]=7;
    // s->top++;
    push(s ,56);

    if(isEmpty(s)){
        printf("stack is empty");
    }
    else {
        printf("stack is not empty");
    }
      // Printing values from the stack
    for (int j = 1; j <= sp->top + 1; j++)
    {
        printf("The value at position %d is %d\n", j, peek(sp, j));
    }
    


    return 0 ;
}
