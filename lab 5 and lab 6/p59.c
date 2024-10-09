#include<stdio.h>

int main() {
    int array1[10], array2[10];

    for (int i=0; i<10; i++) {
        printf("Enter %d%s element of array1: ", i+1, (i+1==1) ? "st" : (i+1==2) ? "nd" : "th");
        scanf("%d", &array1[i]);
    }

    printf("\n");

    for (int i=0; i<10; i++) {
        printf("Enter %d%s element of array2: ", i+1, (i+1==1) ? "st" : (i+1==2) ? "nd" : "th");
        scanf("%d", &array2[i]);
    }

    for (int j=0; j<10; j++) {
        int temp = array2[j];
        array2[j] = array1[j];
        array1[j] = temp;
    }
    printf("\n");

    for (int i=0; i<10; i++) {
        printf("\nThe %d%s element of array1 is: %d", i, (i==1) ? "st" : ((i==2) ? "nd" : "th"), array1[i]);
    }
    printf("\n");
    for (int i=0; i<10; i++) {
        printf("\nThe %d%s element of array2 is: %d", i, (i==1) ? "st" : (i==2) ? "nd" : "th", array2[i]);
    }
}