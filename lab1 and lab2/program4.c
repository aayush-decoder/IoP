// 4. Conversion of Faranheight to celsius

#include <stdio.h>

int main() {
    int tempInF;

    printf("Temperature in Fahrenheit: ");
    scanf("%d", &tempInF);

    printf("Temperature in Celsius: %.2f degree Celsuis", (float) (tempInF-32)*5/9);

    return 0;
}
