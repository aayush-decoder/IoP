#include<stdio.h>

int main() {
    int numbers[10], parityCount[] = {0, 0, 0}; // {positive, xero, negative}
    int sum = 0;

    for (int i=0; i<10; i++) {
        printf("Enter %d%s number of array: ", i+1, (i+1==1) ? "st" : (i+1==2) ? "nd" : "th");
        scanf("%d", &numbers[i]);

        sum += numbers[i];

        if (numbers[i] > 0) {
            parityCount[0] += 1; 
        } else if (numbers[i] == 0) {
            parityCount[1] += 1;
        } else {
            parityCount[2] += 1;
        }
    }

    printf("\nNumber of positive numbers: %d, \nNumber of zero(s): %d, \nNumber of negative numbers: %d\n and the sum is: %d\n", parityCount[0], parityCount[1], parityCount[2], sum);

}