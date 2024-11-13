#include <stdio.h>
#include <string.h>

void swap(char *a, char *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num;
    int len;
    scanf("%d", &num);

    char words[num][100];

    for (int i=0; i<num; i++) {
        scanf("%s", words[i]);
    }

    for (int i=0; i<num; i++) {

        len=0;
        for (int c=0; c<100; c++) {
            if (words[i][c] == '\0') {
                break;
            }
            len++;
        }
int isSwapped = 0;
        for (int k=len; k>0; k--) {

            if (words[i][k-1] < words[i][k]) {
                    swap(&words[i][k-1], &words[i][k]);
                    isSwapped = 1;
                }
            if (words[i][k-1] < words[i][k]) {
                    swap(&words[i][k-1], &words[i][k]);
                    isSwapped = 1;
                }
           if (isSwapped == 0) {
                // if (k == 0) {  
                    strcpy(words[i], "no answer");
                // }
                break;
            }
        }
    }

printf("\nOUTPUT: \n");

    for (int i=0; i<num; i++) {
        printf("%s\n%d", words[i], len);
    }
    return 0;
}