#include<stdio.h>

int main() {
    int length;
    printf("PLease enter the length of the array: ");
    scanf("%d", &length);

    int numbers[length];

    for (int i=0;  i<length; i++) {
        printf("\nEntry number %d: ", i+1);
        scanf("%d", &numbers[i]);
    }

    int query, bool=0;
    printf("Please Enter the number you want to search: ");
    scanf("%d", &query);

    for (int i=0;i<length; i++) {
        if (numbers[i] == query) {
            bool = 1;
        }
    }

    printf("\nThe number you searched is %spresent in the array\n", (bool) ? "" : "not ");

    return 0;
}