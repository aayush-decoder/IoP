#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Enter number whose table ypu need: ");
    scanf("%d", &n);

    for (int i=1; i<=10; i++)
        printf("\n%d x %d = %d", n, i, n*i);

    return 0;
}