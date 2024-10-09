#include<stdio.h>

int main() {

    int numOfLayers;

    printf("Please enter number of layers: ");
    scanf("%d", &numOfLayers);

    for (int i=1; i<=numOfLayers; i++) {
        for (int j=1; j<=numOfLayers; j++) {
            printf("%d", (i==j) ? 1 : 0);
        }
        printf("\n");
    }


    return 0;
}