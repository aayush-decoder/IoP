#include <stdio.h>

int main() {

    FILE* fptr = fopen("text99.txt", "r");
    char text[100];
    fgets(text, 100, fptr);
    int count = 0;

    for (int i=0; i<100; i++) {
        if (text[i] == 'a' || text[i] == 'e' || text[i] == 'i' || text[i] == 'o' || text[i] == 'u')
            count++;
    }
    printf("Number of vowel(s) is/are %d", count);

    return 0;
}