#include <stdio.h>

int* copy(int arr[], int n, int arr_1[]) 
{
    int* ptr;
    // int arr_1[n];

    for (int i=0; i<n; i++)
        arr_1[i] = arr[n-i-1];

    ptr = arr_1;
    return ptr;
}



int main() {

     int arr[] = {1, 2, 3, 4, 51, 6};
     int n = sizeof(arr)/sizeof(arr[0]);
     int arr_1[n];

     int * ptr = copy(arr, n, arr_1);

     for (int i=0; i<n; i++)
        printf("%d\t", *(ptr+i));

    return 0;
}