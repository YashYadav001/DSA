#include <stdio.h>
int binarysearch(int arr[] , int size , int element ){
    int low, mid ,high ;
    low = 0;
    high = size -1;
    while(low <= high){
     mid = (low + high)/2 ;

     if(arr[mid] == element){
        return mid ;
     }
     if(arr[mid]<element){
        low = mid + 1 ;

     }
     else{
        high = mid - 1 ;

     } 

    }
    return -1 ;

} 

int main() {
   int arr[] = {1,3,5,7,9,22,37};
   int size = sizeof(arr)/sizeof(int) ;
   int element = 96;
   int indexsearch = binarysearch(arr , size , element) ;
   printf("the element %d was fount at index %d\n" , element , indexsearch) ;




    return 0;
}