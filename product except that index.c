#include <stdio.h>

int main(){
    int array[100];
    int productArray[100];
    int size;
    
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    
    printf("Enter the elements of the array  : ");
    for (int i = 0 ; i < size ; i++){
        scanf("%d",&array[i]);
    }
    
    for(int i = 0 ; i  < size ; i++){
        int product = 1 ;
        for(int j = 0 ; j < size ; j++){
            if(i == j){
            continue;
            }else{
                product = product* array[j];
            }
        }
        productArray[i] = product;
    }
    
    for(int i = 0 ; i < size ; i++)
        printf("%d ",productArray[i]);
}
