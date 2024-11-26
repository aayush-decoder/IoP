#include <stdio.h>
#include <string.h>

int main() {

     char arr[100];
     fgets(arr, 100, stdin);
     char arr_2[100];

     char* ptr = arr;

     for (int i=strlen(arr)-1; i>=0; i--)
        arr_2[strlen(arr)-i-1] = *(ptr+i);


    //  for (int i=0; i<n; i++)
        printf("%s", arr_2);

    return 0;
}