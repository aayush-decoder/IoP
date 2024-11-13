 #include<stdio.h>

int calculate_gem_elements(char arr[][100],int n){
    int present[26];
    for(int i=0 ; i<26 ; i++){
        present[i] = 1;
    }

    for(int i=0 ; i<n ; i++){
        int tracker[26] = {0}; //0 denotes that gem stone is not present

        for(int j=0 ; arr[i][j] != '\0' ; j++){
            tracker[arr[i][j] - 'a'] = 1; // 1 denotes that gem stone is present
        }

        for(int k=0 ; k<26 ; k++){
            present[k] = tracker[k] & present[k];
        }
    }

    int count = 0;
    for(int i=0 ; i<26 ; i++){
        if(present[i] == 1){
            count++;
        }
    }

    return count;
}

int main(){
    int n;
    printf("Enter the number of inputs : ");
    scanf("%d",&n);

    char arr[n][100];

    for(int i=0 ; i<n ; i++){
        scanf("%s",&arr[i]);
    }

    printf("The number of gem elements is : %d",calculate_gem_elements(arr,n));
}
