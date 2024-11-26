#include <stdio.h>

int main() {

    FILE* fp = fopen("LNMIITSTUDENT.DAT", "w");
    fprintf(fp, "Hello World");
    fclose(fp);
    FILE* fptr = fopen("LNMIITSTUDENT.DAT", "a");
    fprintf(fptr, "\nHello World 2");
    fclose(fptr);


    return 0;
}