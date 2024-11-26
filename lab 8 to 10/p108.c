#include <stdio.h>

int compare_strings(char *str1, char *str2) {
    while (*str1 != '\0' && *str2 != '\0') {
        if (*str1 != *str2) {
            return *str1 - *str2;
        }
        str1++;
        str2++;
    }
    if (*str1 == '\0' && *str2 == '\0') {
        return 0; 
    } else if (*str1 == '\0') {
        return -1; 
    } else {
        return 1; 
    }
}

void reverse_string(char *str) {
    char *start = str;
    char *end = str;
    while (*end != '\0') {
        end++;
    }
    end--; 
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

void concat_strings(char *dest, char *src) {
    while (*dest != '\0') {
        dest++;
    }
    while (*src != '\0') {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}

int main() {

    char text1[] = "Hello World!";
    char text2[20];
    
    int i = 0;
    while (text1[i] != '\0') {
        text2[i] = text1[i];
        i++;
    }
    text2[i] = '\0';

    printf("%s", text2);

    printf("\n%d", compare_strings(text1, text2));

    concat_strings(text1, text2);
    printf("\n%s", text1);

    reverse_string(text1);
    printf("\n%s", text1);






    return 0;
}