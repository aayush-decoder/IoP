#include<stdio.h>
#include<string.h>

int main(){
    int n;
    printf("Enter the number of test cases : ");
    scanf("%d",&n);
    printf("Enter the words\n");

    char arr[n][100];
    for(int i=0 ; i<n ; i++){
       scanf("%s",&arr[i]); 
    }

    int swap,i,j;
    for(i=0 ; i<n ; i++){
        for(j=strlen(arr[i])-1 ; j>0 ; j--){
            if(arr[i][j] > arr[i][j-1]){
                swap = arr[i][j];
                arr[i][j] = arr[i][j-1];
                arr[i][j-1] = swap;
                break;
            }
        }
        if(j == 0){
            printf("No answer\n");
        }
        else{
            printf("%s\n",arr[i]);
        }
    }

}
