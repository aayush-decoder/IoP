// 7.Calculate the area of triangle

#include <stdio.h>

int main() {
    int height, width;

    printf("Height of Triangle: ");
    scanf("%d", &height);

    printf("Width of Triangle: ");
    scanf("%d", &width);

    printf("\nArea of Triangle is %.1f square units.", (float) height*width/2);

    return 0;
}
