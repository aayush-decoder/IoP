#include<stdio.h>

int main() {
    
    int nums[3][3];
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            printf("Enter array element number (%d, %d): ", i+1, j+1);
            scanf("%d", &nums[i][j]);
        }
    }

    int min = nums[0][0];
    int max = nums[0][0];

    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            min = (min < nums[i][j]) ? min : nums[i][j];
            max = (min > nums[i][j]) ? max : nums[i][j];
        }
    }

    //output
    printf("\nMax number is %d and Min number is %d", max, min);
}