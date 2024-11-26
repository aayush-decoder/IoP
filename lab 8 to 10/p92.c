#include <stdio.h> 

int main() {

    int n;
    scanf("%d", &n);
    int arr[n];
    int ARR[n];

    for (int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
        ARR[i] = arr[i];
    }

    int* ptr = ARR;
    int temp = *ptr;

    for (int i =1; i<n; i++) {
        // temp = (*(ptr+i) > temp) ? *(ptr+i) : temp;
        temp ?= (*(ptr+i) > temp) : temp;
    }

    printf("Largest value in the list is %d", temp);
    

    return 0;
}