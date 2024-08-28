// 1. Calculatinf simple intrest

#include <stdio.h>

int main() {
    int principle, time;
    float rate;
    printf("Principle: ");
    scanf("%d", &principle);
    printf("Rate: ");
    scanf("%f", &rate);
    printf("Time Period: ");
    scanf("%d", &time);

    printf("The amount of Interest will be %f rupees", principle*rate*time/100);
    return 0;
}
