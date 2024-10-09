#include<stdio.h>

int numOfLayers;

void makePalindrome(int numOfDigits) {
    for (int i=1; i<=( (numOfLayers*2)-1 -numOfDigits) /2; i++) {
        printf(" ");
    }
    for (int i=1; i<= (numOfDigits+1)/2; i++) {
        printf("%d", i);
    }
    for (int i=(numOfDigits-1)/2; i>=1 ; i--) {
        printf("%d", i);
    }

}



int main() {

    printf("Please enter number of layers: ");
    scanf("%d", &numOfLayers);

    for (int i=1; i<=numOfLayers*2; i+=2) {
        makePalindrome(i);
        printf("\n");
    }


    return 0;
}