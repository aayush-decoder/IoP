// 9. Convert hours, minutes and seconds into only seconds

#include <stdio.h>

int main() {
    int hour, min, sec;

    printf("Number of Hours: ");
    scanf("%d", &hour);

    printf("Number of Minutes: ");
    scanf("%d", &min);

    printf("Number of Seconds: ");
    scanf("%d", &sec);

    printf("\nTotal number of seconds is %d", (hour*60*60)+(min*60)+sec);

    return 0;
}
