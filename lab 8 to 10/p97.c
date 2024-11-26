#include<stdio.h>

int main() {

    int count = 0;
    char sentence[50];
    char* ptr;
    fgets(sentence, 50, stdin);

    ptr = sentence;


    for (int i=0; i<50; i++) {
        if (ptr[i] == 'a' || ptr[i] == 'e' || ptr[i] == 'i' || ptr[i] == 'o' || ptr[i] == 'u' ) {
            count++;
        } else if (ptr[i] == 0) {
            break;
        }
    }
    printf("There are %d vowels in the given string.", count);
    return 0;
}