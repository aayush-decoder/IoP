#include <stdio.h>
#include <math.h>

int main()
{
    int n, digit, sum=0;
    printf("Enter number: ");
    scanf("%d", &n);

    for (int i=1; i<=pow(10, 10); i*=10) {
        digit = (n/i)%10;
        sum += pow(digit, 3);
        if ((n/i)%10 == 0 && i>n*100) {
            break;
        }
    }
        printf("The sum of cubes of digits of %d is %d. \nSo, %d is %sa ARMSTRONG number", n, sum, n, (n==sum) ? "" : "NOT ");

    return 0;
}