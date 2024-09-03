// 14. Check if a number id capital (A-Z) or small (a-z) or digit or special symbol

#include<stdio.h>
#include<string.h>
int main() { 
    char letter;
    char result[20];

    printf("Enter a character: ");
    scanf("%c", &letter);

    letter = (int) letter;
    
    if (letter >= 97 && letter <= 122) {
        strcpy(result, "Lower case letter");
    } else if (letter >= 65 && letter <= 90) {
        strcpy(result, "Upper case letter");
    } else if (letter >= 48 && letter <= 57) {
        strcpy(result, "Digit");
    } else {
        strcpy(result, "Special Symbol");
    }

    printf("The given character is a %s", result);
    return 0;
}