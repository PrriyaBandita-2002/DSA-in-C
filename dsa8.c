#include<stdio.h>

int linearSearch(int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[], int size, int element) {
    int low, mid, high;
    low = 0;
    high = size - 1;
    // Keep searching until low <= high
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == element) {
            return mid;
        }
        if (arr[mid] < element) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[100], i, n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int size = n;
    int element;
    printf("Enter the element to search: ");
    scanf("%d", &element);
    
    int searchIndex;
    printf("Enter the search algorithm (1 for binary search, 2 for linear search): ");
    int searchAlgorithm;
    scanf("%d", &searchAlgorithm);

    switch (searchAlgorithm) {
        case 1:
            searchIndex = binarySearch(arr, size, element);
            break;

        case 2:
            searchIndex = linearSearch(arr, size, element);
            break;

        default:
            printf("Invalid search algorithm!");
            return 0;
    }
    
    if (searchIndex == -1) {
        printf("The element %d was not found.\n", element);
    } else {
        printf("The element %d was found at index %d.\n", element, searchIndex);
    }

    return 0;
}
