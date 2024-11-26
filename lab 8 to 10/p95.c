#include <stdio.h>
#include <stdlib.h>

struct Employee {
    int empNumber;
    char empName[50];
    float basicPay;
};

int main() {
    struct Employee employ[50];
    struct Employee *ptr;
    int n;

    printf("Enter the number of employees (max %d): ", 50);
    scanf("%d", &n);

    if (n > 50 || n <= 0) {
        printf("Invalid number of employees. Exiting.\n");
        // printf("%d", n);
        return 1;
    }

    ptr = employ;

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);

        printf("Employee Number: ");
        scanf("%d", &(ptr + i).empNumber);

        printf("Employee Name: ");
        scanf(" %[^\n]", (ptr + i).empName);

        printf("Basic Pay: ");
        scanf("%f", &(ptr + i).basicPay);
    }

      printf("\nEmployee Details:\n");

    printf("Emp No.\t\tName\t\t\tBasic Pay\n");

    for (int i = 0; i < n; i++) {
        printf("%d\t\t%-20s\t%.2f\n", 
               (ptr + i).empNumber, 
               (ptr + i).empName, (ptr + i).basicPay);
    }

    return 0;
}
