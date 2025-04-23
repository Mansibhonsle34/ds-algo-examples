#include <stdio.h>

int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1, mid;
    while(low <= high) {
        mid = (low + high) / 2;
        if(arr[mid] == key)
            return mid;
        else if(arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50}, key = 30;
    int index = binarySearch(arr, 5, key);
    (index != -1) ? printf("Found at %d\n", index) : printf("Not Found\n");
    return 0;
}
