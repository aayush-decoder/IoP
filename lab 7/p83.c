#include <stdio.h>

int findMaximum(int arr[], int size) {
    int max = arr[0];
     for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int n;
     printf("Enter the number of elements: ");
     scanf("%d", &n);

    int arr[n];
     printf("Enter all %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = findMaximum(arr, n);
    printf("the max element is %d\n", max);
    
    return 0;
}
