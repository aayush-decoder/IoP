// 8.  Earth revolution time (31558150 seconds) to days, hours and minutes

#include <stdio.h>

int main() {
    
    long time = 31558150;

    printf("\nNumber of Days: %d days\nNumber of Hours: %d hours\nNumber of Minutes: %d minutes\n.", (int) time/(24*60*60), (int) (time%(24*60*60))/(60*60), (int) ((time%(24*60*60))%(60*60))/60);

    return 0;
}
