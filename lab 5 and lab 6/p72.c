#include<stdio.h>

int main() {
    int length;
    printf("PLease enter the length of the array: ");
    scanf("%d", &length);

    int numbers[length];

    for (int i=0;  i<length; i++) {
        printf("\nEntry number %d: ", i+1);
        scanf("%d", &numbers[i]);
    }

    int rotate;
    printf("Please Enter the number with which you want to rotate: ");
    scanf("%d", &rotate);

    int rotatedElts[rotate];

    for (int i=0; i<rotate; i++) {
        rotatedElts[i] = numbers[length-1-i];
    }
    for (int i=0; i<length; i++) {
        numbers[length-1-i] = numbers[length-1-i-rotate];
    }
    for (int i=0; i<rotate; i++) {
        numbers[i] = rotatedElts[i];
    }

//output:
    for (int i=0;i<length; i++) {
        printf("%d, ", numbers[i]);
    }

    // printf("\nThe number you searched is %spresent in the array\n", (bool) ? "" : "not ");

    return 0;
}