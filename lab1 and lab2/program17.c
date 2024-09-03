//17. gretest number of 3 using &&

#include <stdio.h>
int main() {
    int a, b, c;
    int max;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    max = a;

    if ((b > max) && (max = b)) {
        // no statemnets as I have included it in the conditional itself
    } else if ((c > max) && (max = c)) {
        // no statemnets 
    }

    printf("The maximum number is: %d\n", max);

    return 0;
}
