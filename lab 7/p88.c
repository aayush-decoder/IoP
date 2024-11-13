#include <stdio.h>

struct Student {
    char name[30];
    char department[10];
    int marks;
};

void displayStudents(struct Student students[], int size) {
    printf("\nStudents with marks greater than 500:\n");
    for (int i = 0; i < size; i++) {
        if (students[i].marks > 500) {
            printf("Name: %s, Marks: %d\n", students[i].name, students[i].marks);
        }
    }
}

int main() {
    struct Student students[10];
    
    for (int i = 0; i < 10; i++) {
        printf("Enter name of student %d: ", i +1);
        scanf(" %[^\n]", students[i].name);  

        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &students[i].marks);
    }
    
    displayStudents(students, 10);

    return 0;
}
