//21. calulator using switch case and arithmatic operactor symbol
#include <stdio.h>
int main() {
    int input1, input2;
    char operator; 
    printf("Enter the first number: ");
    scanf("%d", &input1);
    printf("Enter the operator (+, -, *, /, %%): ");
    scanf(" %c", &operator); 
    printf("Enter the second number: ");
    scanf("%d", &input2);
    switch (operator) {
        case '+':
            printf("Result: %d\n", input1 + input2);
            break;
        case '-':
            printf("Result: %d\n", input1 - input2);
            break;
        case '*':
            printf("Result: %d\n", input1 * input2);
            break;
        case '/':
            if (input2 != 0) {
                printf("Result: %d\n", input1 / input2);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        case '%':
                printf("Answer: %d\n", input1 % input2);
            break;
        default:
            printf("Invalid operator!\n");
            break;
    }

    return 0;
}
