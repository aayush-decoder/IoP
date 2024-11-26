#include <stdio.h>

int main() {
    int n = 5;
    double sum = 0.0;
    double factorial = 1.0;

    for (int i = 1; i <= n; i++) {
        factorial *= i;
        sum += (double)i / factorial;
    }

    printf("%.3f\n", sum);
    return 0;
}
