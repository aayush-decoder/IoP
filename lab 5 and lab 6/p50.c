#include<stdio.h>

int main() {

    int numOfLayers;

    printf("Please enter number of layers: ");
    scanf("%d", &numOfLayers);

    for (int i=1; i<=numOfLayers; i++) {
        for (int j=1; j<=i; j++) {
            printf("%c", 65+i-1);
        }
        printf("\n");
    }


    return 0;
}