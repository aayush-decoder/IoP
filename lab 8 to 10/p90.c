#include <stdio.h>

int* count(char arr[], int n, char arr_1[]) 
{
    int* ptr;
    // int arr_1[n];

    for (int i=0; i<n; i++)
        arr_1[i] = arr[n-i-1];

    ptr = arr_1;
    return ptr;
}



int main() {

     char arr[] = "hello world";
     int n = sizeof(arr)/sizeof(arr[0]);
     char arr_1[n];

     int* ptr = count(arr, n, arr_1);

     for (int i=0; i<n; i++)
        printf("%d\t", *(ptr+i));

    return 0;
}