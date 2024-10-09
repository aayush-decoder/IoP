#include<stdio.h>

int main() {
    
    int nums[3][3];
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            printf("Enter array element number (%d, %d): ", i+1, j+1);
            scanf("%d", &nums[i][j]);
        }
    }

    int sum[] = {0,0,0};

    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            sum[i] += nums[i][j];
        } 
    }

    //output
    for (int i=0;i<3;i++) {
        printf("\nSum of Row %d is %d", i, sum[i]);
    }
}