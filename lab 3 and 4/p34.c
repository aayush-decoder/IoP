#include <stdio.h>
#include <math.h>

int main()
{
    int n,t;
    printf("How many numbes of fibbonacci you wanr: ");
    scanf("%d", &n);

    int n1 = 0;
    int n2 = 1;

    printf("%d\n%d", n1,n2);

    for (int i=0; i<=n; i++) {
        printf("\n%d", (n1+n2));
        t= n1;
        n1 = n2;
        n2 = t+n2;
    }



    

    // printf("\nThe greatest of these %d number(s) is %d", n, max);

    return 0;
}