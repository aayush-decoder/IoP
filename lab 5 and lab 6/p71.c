#include<stdio.h>
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int position,temp;
    printf("Enter the number of positions(1-9) by which you want to rotate the array : ");
    scanf("%d",&position);

    for(int i=0 ; i<(position) ; i++){
        temp = arr[0];
        for(int j=0 ; j<9 ; j++){
            arr[j] = arr[j+1];
        }
        arr[9] = temp;
    }

    int pivot_element = 1;

    int low=0,mid,high=9;
    while(high>low){
        if(arr[low]<arr[high])
        {
            low=low;
            
        }
        mid=(high+low)/2;
        if(arr[mid]>arr[high])
        {
            low=mid+1;
           
        }
        else
        {
            high=mid-1;
        }
    } 
    printf("Pivot element is found at index %d \n",low);

}