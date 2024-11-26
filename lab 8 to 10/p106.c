#include <stdio.h>

// item name, quantity , price
void generateField(char name[], int quantity, int price) {
    static int count = 1;
    printf("\n%d.\t%s\t|\t%d\t\t|\t%d\t|   Rs. %d", count++, name, quantity, price, (int) (quantity*price));
}

int main() {
    printf("  \tItem\t|\tQuantity\t|\tPrice\t|   Amount");

    generateField("pencil", 10, 5);
    generateField("pen", 4, 10);
    generateField("diary", 2, 75);
    generateField("ruler", 1, 10);
    generateField("Marker", 1, 20);

    return 0;
}