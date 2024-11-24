#include<stdio.h>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[100], size, position, value;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Array before insertion: ");
    printArray(arr, size);
    printf("Enter the value to insert at the front: ");
    scanf("%d", &value);
    for (int i = size; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = value;
    size++;
    printf("Array after inserting at the front: ");
    printf("Enter the value to insert at the end: ");
    scanf("%d", &value);
    arr[size] = value;
    size++;
    printf("Array after inserting at the end: ");
    

    

    return 0;
}









    


    

