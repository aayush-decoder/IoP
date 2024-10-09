#include<stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int length;
    printf("PLease enter the length of the array: ");
    scanf("%d", &length);

    int numbers[length];

    for (int i=0;  i<length; i++) {
        printf("\nEntry number %d: ", i+1);
        scanf("%d", &numbers[i]);
    }

    int m=0;

    for (int i=0; i<length-1; i++) {
        for (int j=0; j<length-1; j++) {
            if (numbers[j] > numbers[j+1]) {
                swap(&numbers[j], &numbers[j+1]);
            }
        }
        m++;
    }

    printf("\nThe Output: ");
    for (int i=0;  i<length; i++) {
        printf("%d, ", numbers[i]);
    }

    return 0;
}