#include <stdio.h>

int isFibo(int num) {
    int term[2] = {0, 1};
    int ans;
    for (int i=0; i<1000; i++) {
        ans = term[0] + term[1];
        if (num  == ans) {
            return 1;
        } else if (num < ans) {
            return 0;
        }
        term[0] = term[1];
        term[1] = ans;
    }
}

int main() {

    int num;
    scanf("%d", &num);

    int numbers[num];

    for (int i=0; i<num; i++) {
        scanf("%d", &numbers[i]);
    }
    printf("OUTPUT: \n");
    
    for (int i=0; i<num; i++) {
        printf("\n%s", (isFibo(numbers[i])) ? "isFibo" : "isNotFibo");
    }
    return 0;
}