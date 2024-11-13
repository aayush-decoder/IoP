#include<stdio.h>
int main(){    
    int M,N,index1,index2,candies,sum=0;    
    printf("Enter the number of jars and number of operations : \n");    
    scanf("%d %d",&N,&M);    for(int i=0 ; i<M ; i++){        
        scanf("%d %d %d",&index1,&index2,&candies);        
        sum += (index2-index1+1)*candies;    
    }    

    
    printf("%d",sum/5);

    return 0;

}
