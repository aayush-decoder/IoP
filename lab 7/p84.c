#include <stdio.h>

void readBook(char title[], char author[], int *publicationYear, float *price) {
    printf("Enter the title of the book: ");
    scanf(" %[^\n]", title);

    printf("Enter the author of the book: ");
    scanf(" %[^\n]", author);

    printf("Enter the publication year: ");
    scanf("%d", publicationYear);

    printf("Enter the price: ");
    scanf("%f", price);
}

void displayBook(const char title[], const char author[], int publicationYear, float price) {
    printf("\nBook Information:\n");
    printf("Title: %s\n", title);
    printf("Author: %s\n", author);
    printf("Publication year : %d\n", publicationYear);
    printf("Price: %.2f\n", price);
}

int main() {
    char title[50], author[100];
    int publicationYear;
    float price;

    readBook(title, author, &publicationYear, &price);
    displayBook(title, author, publicationYear, price);

    return 0;
}
