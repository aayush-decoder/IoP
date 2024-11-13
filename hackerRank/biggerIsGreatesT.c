#include <stdio.h>
#include <string.h>

void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
}
 int main() {

    char word[50] = "abc";

    for (int i=(strlen(word)-1); i>=0; i--) {
        if (word[i] > word[i-1]) {
            swap(&word[i], &word[i-1]);
            break;
        }
    printf("%s\n", word);
    }


    







    return 0;
 }