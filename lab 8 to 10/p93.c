#include <stdio.h>

int main() {

    char sentence[100];
    fgets(sentence, 100, stdin);

    char* ptr = sentence;

    int count = 1;
    for (int i=0; i<100; i++) {
        if (*(ptr+i) == ' ') {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}