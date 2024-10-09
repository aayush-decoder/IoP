#include <stdio.h>

int main() {
    int n = 10;
    int roll_numbers[n];
    int maths[n], physics[n], chemistry[n], total[n];
    int highest_maths = 0, highest_physics = 0, highest_chemistry = 0, highest_total = 0;
    int student_maths, student_physics, student_chemistry, student_total;

    for (int i = 0; i < n; i++) {
        roll_numbers[i] = i + 1;
        printf("Enter marks for Student Roll Number %d\n", roll_numbers[i]);
        printf("Maths: ");
        scanf("%d", &maths[i]);

        printf("Physics: ");
        scanf("%d", &physics[i]);

        printf("Chemistry: ");
        scanf("%d", &chemistry[i]);

        total[i] = maths[i] + physics[i] + chemistry[i];

        if (maths[i] > highest_maths) {
            highest_maths = maths[i];
            student_maths = roll_numbers[i];
        }
        if (physics[i] > highest_physics) {
            highest_physics = physics[i];
            student_physics = roll_numbers[i];
        }
        if (chemistry[i] > highest_chemistry) {
            highest_chemistry = chemistry[i];
            student_chemistry = roll_numbers[i];
        }

        if (total[i] > highest_total) {
            highest_total = total[i];
            student_total = roll_numbers[i];
        }
    }

//Outputs*********
    printf("\nTotal Marks Obtained by Each Student:\n");
    for (int i = 0; i < n; i++) {
        printf("Student Roll Number %d: Total Marks = %d\n", roll_numbers[i], total[i]);
    }

    printf("\nHighest Marks in Each Subject:\n");
    printf("Maths: %d by Student Roll Number %d\n", highest_maths, student_maths);
    printf("Physics: %d by Student Roll Number %d\n", highest_physics, student_physics);
    printf("Chemistry: %d by Student Roll Number %d\n", highest_chemistry, student_chemistry);
    
    printf("\nHighest Total Marks: %d by Student Roll Number %d\n", highest_total, student_total);

    return 0;
}
