#include <stdio.h>

// void swap(char *a, char *b)
// {
//         int temp = a;
//         a = b;
//         b = temp;
// }

void swap(char* a[], char* b[])
{
    char temp[20]; // Temporary buffer to hold one string
    strcpy(temp, a);  // Copy first string into temp
    strcpy(a, b);     // Copy second string into first
    strcpy(b, temp);  // Copy temp into second
}

void main()
{
    int n = 5;
    // int index = 0;
    int pos = 0;
    char words[][20] = {"looks", "books", "cooks", "juice", "apple"};
    char *ptr;
    ptr = words;
    // char words_2[n][20];

    for (int j=0; j<n; j++)
    {
        for (int i = 0; i < n-1; i++)
    {
        if (words[i][pos] > words[i + 1][pos])
        {
            printf("%c %c\n", words[i][pos], words[i + 1][pos]);
            swap(&words[i], &words[i+1]);
        }
    }

    }

    for (int i = 0; i < n; i++)
    {
        printf("%s\n", words[i]);
    }
}