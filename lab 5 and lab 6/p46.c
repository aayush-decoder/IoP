#include<stdio.h>
// #include<math.h>
#define PI 3.14159

int main() {
    float circumference;
    printf("Enter your head circumference in inches: ");
    scanf("%f", &circumference);

    printf("Your hat size is %.2f", circumference/PI);

    return 0;
}