//3. gross salaraly calculation

#include <stdio.h>

int main() {
    float basic_salary, petrol_allowance, medical_insurance, gross_salary;

    printf("Enter the basic salary: ");
    scanf("%f", &basic_salary);

    petrol_allowance = 0.05 * basic_salary;
    medical_insurance = 2000;
    gross_salary = basic_salary +petrol_allowance+medical_insurance;

    printf("Basic Salary: %.2f\n", basic_salary);
    printf("Petrol Allowance: %.2f\n", petrol_allowance);
    printf("Medical Insurance: %.2f\n", medical_insurance);
    printf("Gross Salary: %.2f\n", gross_salary);

    return 0;
}
