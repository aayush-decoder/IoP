#include <stdio.h>
#include <math.h>

int main()
{
    int n, digit, newNum=0;
    // int sum=0;
    printf("Enter number: ");
    scanf("%d", &n);

    float numberOfDigits = floor(log10(n)+1);
    int j =1;
    for (int i=1; i<=pow(10, 10); i*=10) {
        digit = (n/i)%10;
        newNum += digit * pow(10, (int) numberOfDigits-j);
        if ((n/i)%10 == 0 && i>n/10000) {
            break;
        }
        j++;
    }
        printf("\nReversed Number: %d", newNum);

    return 0;
}