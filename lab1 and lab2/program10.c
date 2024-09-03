// 10. Convert hours, minutes and seconds into only seconds
#include <stdio.h>

int main() {
    int m, p, c, e;

    printf("Number in Maths: ");
    scanf("%d", &m);

    printf("Number in Physics: ");
    scanf("%d", &p);

    printf("Number in Chemistry: ");
    scanf("%d", &c);

    printf("Number in English: ");
    scanf("%d", &e);

    printf("\nThe cutoff marks of the student is  %d",m/2+p/2+c/2+e);

    return 0;
}
