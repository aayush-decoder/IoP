// 11. Program to read total seconds and convert it into ime


#include <stdio.h>

int main() {
    
    long time;
    scanf("%ld", &time);

    printf("\nNumber of Days: %d days\nNumber of Hours: %d hours\nNumber of Minutes: %d minutes\nNumber of Seconds: %dseconds\n.", (int) time/(24*60*60),(int) (time%(24*60*60))/(60*60), (int) ((time%(24*60*60))%(60*60))/60, (int) (((time%(24*60*60))%(60*60))%60));

    return 0;
}
