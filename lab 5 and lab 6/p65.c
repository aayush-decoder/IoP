#include<stdio.h>

int main() {
    
    int nums[3][3], nums2[3][3];
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            printf("Enter array element number (%d, %d): ", i+1, j+1);
            scanf("%d", &nums[i][j]);
        }
    }

    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            nums2[i][j] = nums[j][i];
        }
    }

    //output
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            printf("%d, ", nums2[i][j]);
        }
        printf("\n");
    }
}