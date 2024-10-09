#include<stdio.h>

int main() {

    int numOfLayers;
    int directionNumber = 1;

    printf("Please enter number of layers: ");
    scanf("%d", &numOfLayers);

    if (numOfLayers%2) {
        for (int i=1; (i<=numOfLayers && i > 0); i+=directionNumber) {

            for (int k = (numOfLayers+1)/2 -i ; k>0; k--) {
                printf(" ");
            }

            for (int j=1; j<=(i*2)-1; j++) {
                printf("*");
                if (i==(numOfLayers+1)/2) {
                    directionNumber = -1;
                    // printf("%d", numOfLayers);
                }
            }

            printf("\n");
        }
    }
    else {
        printf("\nPlease Enter odd number of layers for kaju-katli !\n");
    }


    return 0;
}