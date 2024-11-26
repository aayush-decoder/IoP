#include <stdio.h>

int main() {

    FILE* fptr = fopen("text102.txt", "r");
    int characters = 0;
    int words = 1;
    int lines = 1;
    char ch = fgetc(fptr);

    while (ch != EOF) {
        if (ch == '\n') {
            lines++;
            characters--;
        }
        else if (ch == ' ')
            words++;

        characters++;

        ch = fgetc(fptr);
        // printf("%c ", ch);
    }

    printf("Number of words: %d,\nNumber of lines: %d,\n Number of characters: %d", words, lines, characters);

    fclose(fptr);

    return 0;
}