#include<stdio.h>

int main() {

    int n, max, secondMax;

    printf("Please enter the number of entries you want to enter: ");
    scanf("%d", &n);

    int numbers[n];

    for (int i=0; i<n; i++) {
        printf("Enter %d%s number of array: ", i+1, (i+1==1) ? "st" : (i+1==2) ? "nd" : "th");
        scanf("%d", &numbers[i]);

        if (i!=0) {
            max = (numbers[i] > numbers[i-1]) ? numbers[i] : numbers[i-1];
        }
    }

    for (int j=0; j<n-1; j++) {
        secondMax = (max < numbers[j] && max < numbers[j+1] && numbers[j+1] < numbers[j]) ? numbers[j] : numbers[j+1];
    }

    printf("\nMaximum number of all enteries is: %d, \nSecond Maximum number of all enteries is: %d\n", max, secondMax);

    return 0;
}