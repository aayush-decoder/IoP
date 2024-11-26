#include <stdio.h>
#include <string.h>

void swap(char* a, char* b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

int main() {

    char word[10], original[10];
    scanf("%s", &word);
    strcpy(original, word);
    int start = 1;
    
    while (strcmp(word, original) || start) {
        for (int j=0; j<strlen(word)-1; j++) {
            swap(&word[j], &word[j+1]);
            printf("%s\n", word);
        }
        start =0;
    }
    
    



    return 0;
}
