#include <stdio.h>

void insertionSort(int arr[], int n) {
    for(int i = 1; i < n; i++) {
        int key = arr[i], j = i - 1;
        while(j >= 0 && arr[j] > key)
            arr[j+1] = arr[j--];
        arr[j+1] = key;
    }
}

void display(int arr[], int n) {
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {9, 3, 5, 1, 2};
    insertionSort(arr, 5);
    display(arr, 5);
    return 0;
}
