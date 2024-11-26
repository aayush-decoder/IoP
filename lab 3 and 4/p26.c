#include <stdio.h>
#include <math.h>

int main()
{
    int n, sumO = 0, sumE = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i=1; i<=n; i++) {
        if (i%2==0) {
            sumE += i;
        } else {
            sumO += i;
        }
    }
        printf("Sum of All odd numbers: %d\nSum of all Even Numbers: %d", sumO, sumE);

    return 0;
}