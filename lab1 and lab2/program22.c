//22. factorial of a number

#include <stdio.h>

int main() {
    int input1, answer=1;

    printf("Enter the number: ");
    scanf("%d", &input1);

    for (int i=1; i<=input1; i++) {
        answer *= i;
    }

    printf("Factorial of %d is %d", input1, answer);

    return 0;
}
