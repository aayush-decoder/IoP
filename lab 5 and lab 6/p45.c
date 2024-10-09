#include<stdio.h>
#include<time.h>

#define true 1

int main() {

    time_t random;
    time(&random)
    ;
    random %= 10;

    printf("Guess the number challange!\n\n");

    while (true) {
        int guess;
        printf("Guess a number from (0-9): ");
        scanf("%d", &guess);

        if (guess == random) {
            printf("Congratulations! You guessed the lucky number!");
            break;
        } else {
            printf("Oops! %d is not the lucky number. Please try again.\n\n", guess);
        }
    }

    // printf("%d", random);

    return 0;
}