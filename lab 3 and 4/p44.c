#include<stdio.h>

int main() {
    int sales, commission;
    scanf("%d", &sales);

    if (sales<=500) {
        commission = 0.05*sales;
    } else if (sales <= 2000) {
        commission= ((sales-500)*0.1)+35;
    }else if (sales <= 5000) {
        commission= ((sales-2000)*0.12)+185;
    } else if (sales > 5000) {
        commission= ((sales-500)*0.12);
    }
    printf("commission is %d", commission);
    return 0;
}