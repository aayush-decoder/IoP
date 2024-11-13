#include <stdio.h>

int main() {

    int num;
    scanf("%d", &num);
    int tempNum = num;
    int ans=0;

    for (int i =0; i<num; i++) {
        if ( num % (tempNum%10) == 0) {
            ans++;
        }
        tempNum /= 10;

        if (tempNum == 0) {
            break;
        }
    }

    printf("%d", ans);

    

    return 0;
}