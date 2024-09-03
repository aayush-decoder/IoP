//20. simple calculator using switch case

#include <stdio.h>
#include <string.h>

int main() {
    int input1, input2;
    char op[10];
    int operation; 

    printf("Number 1: ");
    scanf("%d", &input1);

    printf("Operation (add, subtract, multiply, divide, remainder): ");
    scanf("%s", op);

    printf("Number 2: ");
    scanf("%d", &input2);

    if (strcmp(op, "add") == 0) {
        operation = 1;
    } else if (strcmp(op, "subtract") == 0) {
        operation = 2;
    } else if (strcmp(op, "multiply") == 0) {
        operation = 3;
    } else if (strcmp(op, "divide") == 0) {
        operation = 4;
    } else if (strcmp(op, "remainder") == 0) {
        operation = 5;
    } else {
        operation = 0; // for any Invalid operation
    }

    switch (operation) {
        case 1:
            printf("\nResult: %d\n", input1 + input2);
            break;
        case 2:
            printf("\nResult: %d\n", input1 - input2);
            break;
        case 3:
            printf("\nResult: %d\n", input1 * input2);
            break;
        case 4:
            if (input2 != 0) {
                printf("\nResult: %d\n", input1 / input2);
            } else {
                printf("\nError: Division by zero\n");
            }
            break;
        case 5:
            if (input2 != 0) {
                printf("\nResult: %d\n", input1 % input2);
            } else {
                printf("\nError: Division by zero\n");
            }
            break;
        default:
            printf("Invalid operation!\n");
            break;
    }

    return 0;
}
