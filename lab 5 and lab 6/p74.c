#include <stdio.h>

int main() {
    int array1[6] = {1, 3, 5, 7, 9, 11};
    int array2[6] = {2, 4, 6, 8, 10, 12};
    int mergedArray[12];
    int i = 0, j = 0, k = 0;

    while (i < 6 && j < 6) {
        if (array1[i] < array2[j]) {
            mergedArray[k++] = array1[i++];
        } else {
            mergedArray[k++] = array2[j++];
        }
    }

    while (i < 6) {
        mergedArray[k++] = array1[i++];
    }

    while (j < 6) {
        mergedArray[k++] = array2[j++];
    }

    printf("Merged Sorted Array:\n");
    for (i = 0; i < 12; i++) {
        printf("%d, ", mergedArray[i]);
    }
    printf("\n");

    return 0;
}
