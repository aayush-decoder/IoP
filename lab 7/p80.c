#include <stdio.h>


int fibo(int n) {
    if (n == 1) {
        return 0;
    } else if (n == 2) {
        return 1;
    } else {
        return fibo(n-1) + fibo(n-2);
    }
}

int main() {
    int num = 5;
    for (int i=0; i<3; i++) {
        for (int j=1; j<=num; j++) {
            printf("%d ", fibo(j));
        }
        printf("\n");
        num += 5;
    }

    return 0;
}