#include <stdio.h>
#include <math.h>

int main()
{
    int n, x, ans;
    printf("Enter a n and x: ");
    scanf("%d %d", &n, &x);

    switch (n)
    {
    case 1:
        ans = 1+x;
        break;
    case 2:
        ans = 1 + x/n;
        break;
    case 3:
        ans = 1 + pow(x, n);
        break;
    // case (n>3 || n<1):
    //     ans = 1 + x*n;
    //     break;
    default:
        if (n>3 || n<1) {
            ans = 1 + x*n;
        }
        break;
    }

    printf("\nThe answer is %d", ans);

    return 0;
}