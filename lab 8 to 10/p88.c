#include <stdio.h>

int* copy(int arr[], int n) 
{
    int* ptr;
    int arr_1[n];

    for (int i=0; i<n; i++)
        arr_1[i] = arr[i];

    ptr = arr_1;
    return ptr;
}



int main() {

     int arr[] = {1, 2, 3, 4, 51, 6};
     int n = sizeof(arr)/sizeof(arr[0]);
    //  int arr_1[n];

     int * ptr = copy(arr, n);

     for (int i=0; i<n; i++)
        printf("%d\t", *(ptr+i));

    return 0;
}