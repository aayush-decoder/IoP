#include <stdio.h>
#include <math.h>

int main()
{
    int n, sum=0;
    printf("How many number you want to enter: ");
    scanf("%d", &n);
    int numbers[n-1];

    int = 0;
    while (1) {
        scanf("%d", &numbers[i]);
        sum += numbers[i];
i++;
        // printf("%d\n", numbers[i]);
    }

    // int i = 0;
    // while (i<n) {
    //     if (numbers[i] < numbers[i+1]) {
    //         // max = ((int)sizeof(numbers)/(int)sizeof(numbers[0]) != i+1) ? numbers[i+1] : max;
    //         max = numbers[i+1];
    //     } else {
    //         max = numbers[i];
    //     }
    //     i++;
    // }

    

    // printf("\nThe greatest of these %d number(s) is %d", n, max);

    return 0;
}