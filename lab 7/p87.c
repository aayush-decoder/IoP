#include <stdio.h>
#include <string.h>

int findLength(char str[]) {
    return strlen(str);
}

int main() {
    char str[100];
    printf("Enter a line of text: ");
    fgets(str, 100, stdin);  
    printf("Length of the string is: %d\n", findLength(str)-1);
    return 0;
}
