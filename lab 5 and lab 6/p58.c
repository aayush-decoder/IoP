#include<stdio.h>

void takeInput(int *array) {
    printf("\nNew array entry starts...\n");
    for (int i=0; i<10; i++) {
            printf("  Enter %d%s number of array: ", i+1, (i+1==1) ? "st" : (i+1==2) ? "nd" : "th");
            scanf("%d", &array[i]);
        }
}


int main() {
    int numbers1[10], numbers2[10], numbers3[10];

    takeInput(numbers1);
    takeInput(numbers2);

    printf("Output of final array...\n");

    for (int i=0; i<10; i++) {
        numbers3[i] = numbers1[i] + numbers2[i];
        printf("  Element %d: %d\n", i+1 ,numbers3[i]);
    }

    

    // printf("\nNumber of positive numbers: %d, \nNumber of zero(s): %d, \nNumber of negative numbers: %d\n", parityCount[0], parityCount[1], parityCount[2]);


    return 0;
}