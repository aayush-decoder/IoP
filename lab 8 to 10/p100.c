#include <stdio.h>

int main() {

    FILE* fp = fopen("LNMIITSTUDENT.JAVA", "r");
    FILE* fptr = fopen("student_data.txt", "a");
    char text[100];
    char ch = fgetc(fp);
    char c[2] = {ch, '\0'};

    for (int i=0; i<3; i++) {


        fprintf(fptr, "\n\nRoll no: ");
    while (ch != ',') {
            c[0] = ch;
            fprintf(fptr,  c);
            ch = fgetc(fp);
        }
        ch = fgetc(fp);

        fprintf(fptr, "\nName: ");
        while (ch != ',') {
            c[0] = ch;
            fprintf(fptr,  c);
            ch = fgetc(fp);
        }
        ch = fgetc(fp);

        fprintf(fptr, "\nMarks: ");
        while (ch != ';') {
            c[0] = ch;
            fprintf(fptr,  c);
            ch = fgetc(fp);
        }
        ch = fgetc(fp);
        ch = fgetc(fp);
    }

    fclose(fp);


    

 
    return 0;
}