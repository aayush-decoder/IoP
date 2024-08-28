// 6.  5. Swap 2 variables without using a 3rd variable

#include <stdio.h>

int main() {
    int a, b;

    printf("Value of a: ");
    scanf("%d", &a);

    printf("Value of b: ");
    scanf("%d", &b);

    a = a+b;
    b = a-(b*2);
    b = (a+b)/2;
    a = -1*(b-a);

    printf("\nValue of a is %d and value of b is %d.", a, b);

    return 0;
}
