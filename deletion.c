#include <stdio.h>

void display(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
    printf("\n");
}

void inddeletion(int arr[], int size, int index) {
    for(int i = index; i < size - 1; i++) {
        arr[i] = arr[i+1];
    }
}

int main() {
    int arr[100] = {1, 2, 18, 8};
    int size = 4, index = 0;

    display(arr, size);
    inddeletion(arr, size, index);
    size -= 1;
    display(arr, size);

    return 0;
}
