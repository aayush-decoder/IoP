#include <stdio.h>
#include <math.h>

int flip(int num, int n) {
    int store = num/pow(10, n);
    int toFlip = num%((int) pow(10, n));
    int flippedNum = 0;

    while (toFlip) {
        flippedNum = flippedNum*10 + toFlip % 10;
        toFlip /= 10;
    }

    return store*pow(10, n) + flippedNum;

}

void main () {

    int number, N;
    printf("Enter the number: ");
    scanf("%d", &number);
    printf("N = ");
    scanf("%d", &N);
    printf("\nOutput: %d", flip(number, N));

}