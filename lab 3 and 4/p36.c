#include <stdio.h>

int main() {
    int n = 10; 
    for (int i = 1; i <= n * 2; i += 2) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
