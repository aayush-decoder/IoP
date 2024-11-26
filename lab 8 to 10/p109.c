#include <stdio.h>

int main() {
    int x = 10;  
    int *ptr;    
    ptr = &x;

    printf("Value of x before: %d\n", x);
    *ptr = 20;

    printf("Value of x after: %d\n", x);

    return 0;
}