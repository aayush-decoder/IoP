//23. power of a number without using <math.h>

#include <stdio.h>

int main() {
    int input1, pow, answer=1;

    printf("Enter the base: ");
    scanf("%d", &input1);

    printf("Enter the Power: ");
    scanf("%d", &pow);

    for (int i=1; i<=pow; i++) {
        answer *= input1;
    }

    printf("Answer of %d ^ %d is %d", input1, pow, answer);

    return 0;
}
