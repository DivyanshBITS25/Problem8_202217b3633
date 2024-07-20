#include <stdio.h>

// Function to find the position of the smallest element
int find_smallest(int arr[], int start, int n) {
    int pos = start;
    for (int j = start + 1; j < n; j++) {
        if (arr[j] < arr[pos]) {
            pos = j;
        }
    }
    return pos;
}

// Function to perform Selection Sort
void selection_sort(int arr[], int n) {
    int i, pos, temp;
    for (i = 0; i < n - 1; i++) {
        pos = find_smallest(arr, i, n);
        // Swap the found smallest element with the first element
        temp = arr[i];
        arr[i] = arr[pos];
        arr[pos] = temp;
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    selection_sort(arr, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
