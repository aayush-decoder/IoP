#include <stdio.h>
#include <math.h>

int main()
{
    int n, max, min;
    printf("How many number you want to enter: ");
    scanf("%d", &n);
    int numbers[n-1];

    for (int i=0; i<=n; i++) {
        scanf("%d", &numbers[i]);
        // printf("%d\n", numbers[i]);
    }

    int i = 0;
    while (i<n) {
        if (numbers[i] < numbers[i+1]) {
            // max = ((int)sizeof(numbers)/(int)sizeof(numbers[0]) != i+1) ? numbers[i+1] : max;
            max = numbers[i+1];
            min = numbers[i];
        } else {
            max = numbers[i];
            min= numbers[i+1];
        }
        i++;
    }

    

    printf("\nThe greatest of these %d number(s) is %d and lowest is %d", n, max, min);

    return 0;
}