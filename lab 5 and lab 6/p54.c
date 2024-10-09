#include<stdio.h>

int main() {
    int numbers[10], sum=0;

    for (int i=0; i<10; i++) {
        printf("Enter %d%s number of array: ", i+1, (i+1==1) ? "st" : (i+1==2) ? "nd" : "th");
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    printf("\nThe Sum of all entries are: %d", sum);


    return 0;
}