#include <stdio.h>

int main() {

    int marks[5];
    const char subjects[15][15] = { "Physics", "Chemistry", "Mathematics", "English", "Computer" };

    int total;

    printf("Enter your marks out of 100: \n\n");

    for (int i=0; i<5; i++) {
        printf("Marks of %s (Subject %d): ", subjects[i], i+1);
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    printf("\nTotal Marks is %d and the Percentage is %.2f percentage\n", total, (float) total*100/500);

    // printf("The amount of Interest will be %f rupees", principle*rate*time/100);
    return 0;
}
