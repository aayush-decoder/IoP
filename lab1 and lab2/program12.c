// 12. Check ASCII code of any character

#include <stdio.h>

int main(void) {
    char c;
    printf("Choose a Character: ");
    scanf("%c", &c);

    printf("The ASCII code of the character %c is %d.", c, c);
}