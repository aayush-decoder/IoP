#include<stdio.h>

int main() {
    
    int nums[3][3], nums2[3][3], nums3[3][3];
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            printf("Enter array 1, element number (%d, %d): ", i+1, j+1);
            scanf("%d", &nums[i][j]);
        }
    }
    printf("\n");
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            printf("Enter array 2, element number (%d, %d): ", i+1, j+1);
            scanf("%d", &nums2[i][j]);
        }
    }

//adding the matrixes
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            nums3[i][j] = nums[i][j] - nums2[i][j];
        }
    }

    //output
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            printf("%d, ", nums3[i][j]);
        }
        printf("\n");
    }
}