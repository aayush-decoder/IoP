// 19. Check if a number id capital (A-Z) or small (a-z)

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
    } 

    printf("The given character is a %s", result);
    return 0;
}