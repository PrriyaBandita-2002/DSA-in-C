//array deletion
#include<stdlib.h>
#include <stdio.h>

void display(int arr[], int n);
int Deletion(int arr[], int s, int element, int capacity, int index);

int main() {
    int arr[100], i, n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int s;
    printf("Enter the size of the array: ");
    scanf("%d", &s);
    display(arr, s);

    int element;
    printf("Enter the element to delete: ");
    scanf("%d", &element);

    int capacity = 100;
    int index ;
    printf("Enter the index to delete the element at: ");
    scanf("%d", &index);

    Deletion(arr, s, element, capacity, index);
    s -= 1;
    display(arr, s);

    return 0;
}

int Deletion(int arr[], int s, int element, int capacity, int index) {
    int i;
    if (s >= capacity) {
        return -1;
    }
    for (i = index; i<s-1; i++) {
        arr[i] = arr[i+1];
    }
    arr[index] = element;
    return 1;
}

void display(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
