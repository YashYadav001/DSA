#include <stdio.h>
int linearsearch(int arr[] , int size , int element ){

    for (int i = 0; i < size; i++)
    {
        if(arr[i]== element){
            return i ;
        } ;
    };
    return -1 ;
    
} 

int main() {
    int arr[100] ={1,4,5,6,7,8,83,21,1,34,5,2} ;
    int element = 2 ;
    int indexsearch = linearsearch(arr, 12 ,element) ;
    printf("the element %d was found at index %d \n ", element ,indexsearch );



    return 0;
}