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

    

    for (int i=0;i<length; i++) {
        int occurance = 0;
        for (int j=0; j<length; j++) {
            if (numbers[i] == numbers[j])
                occurance++;
        }
        printf("Element %d: occured %d time%c whose value is %d\n", i+1, occurance, occurance>1 ? 's' : 32, numbers[i]);
    }

    // printf("\nThe number you searched is %spresent in the array\n", (bool) ? "" : "not ");

    return 0;
}