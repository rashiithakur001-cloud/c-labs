#include <stdio.h>
void FindMaxMin(int arr[], int n, int *max, int *min) {
    *max = arr[0]; 
    *min = arr[0]; 
    for (int i = 1; i < n; i++) {
        if (arr[i] > *max) { 
            *max = arr[i];
        }
        if (arr[i] < *min) {
            *min = arr[i];
        }
    }
}

double computeAverage(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return (double)sum / n; 
}
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) { 
            return i; // index if key is found
        }
    }
    return -1; //if key is not found
}int main() {
    int n;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
   int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int maximum, minimum;
    FindMaxMin(arr, n, &maximum, &minimum);
    printf("Maximum: %d\n", maximum);
    printf("Minimum: %d\n", minimum);
    printf("Average: %.2f\n", computeAverage(arr, n));

    int searchKey;
    printf("Enter element to search: ");
    scanf("%d", &searchKey);
    int foundIndex = linearSearch(arr, n, searchKey);
    if (foundIndex != -1) {
        printf("%d found at index %d in the array\n", searchKey, foundIndex);
    } else {
        printf("%d not found in the array\n", searchKey);
    }

    return 0;
}