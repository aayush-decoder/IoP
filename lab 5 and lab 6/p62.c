#include<stdio.h>

int main() {
    int len;
    printf("Length of array: ");
    scanf("%d", &len);

    printf("Enter array elements: ");
    int nums[len], nums2[len];
    for (int i=0; i<len; i++) {
        scanf("%d", &nums[i]);
    }

    for (int i=0; i<len; i++) {
        nums2[len-1-i] = nums[i];
    }

    //output
    for (int i=0; i<len; i++) {
        printf("%d, ", nums2[i]);
    }
}