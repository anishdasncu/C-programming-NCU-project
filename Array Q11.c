#include<stdio.h>

#include <stdio.h>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[100], size, position;

  
    printf("size of the array: ");
    scanf("%d", &size);
    printf(" elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Array before deletion: ");
    for (int i = 0; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;
    printf("Array after deleting from the front: ");
    size--;
    printf("Array after deleting from the end: ");
    printf("Enter the position to delete:%d ", size - 1);
    scanf("%d", &position);
    for (int i = position; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;
    printf("Array after deleting from position %d: ", position);
   

    return 0;
}










    


    

