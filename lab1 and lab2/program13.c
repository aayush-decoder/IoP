// 13. Check if a number is even or odd

#include<stdio.h>
int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("The given number is %s", (num%2==0) ? "Even" : "Odd");
    return 0;
}