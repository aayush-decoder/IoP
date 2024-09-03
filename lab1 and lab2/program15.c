// 15. Enter marks of 5 subjects and check division

#include<stdio.h>
#include<string.h>
int main() { 
    int s1, s2, s3, s4, s5, total;
    printf("Enter a marks of 5 subjects: ");
    scanf("%d", &s1);
    scanf("%d", &s2);
    scanf("%d", &s3);
    scanf("%d", &s4);
    scanf("%d", &s5);
    total = s1+s2+s3+s4+s5;

    if (total/5 > 90) {
        printf("A division");
    } else if (total/5 > 80) {
        printf("B division");
    } else if (total/5 > 70) {
        printf("C division");
    } else if (total/5 > 60) {
        printf("D division");
    } else if (total/5 > 50) {
        printf("E division");
    } else {
        printf("F division");
    }
    return 0;
}