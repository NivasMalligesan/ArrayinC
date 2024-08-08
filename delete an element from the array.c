#include <stdio.h>

int main(){
    int array[100];
    int size;
    int del;
    
    printf("Enter the Size of the array : ");
    scanf("%d",&size);
    
    for(int i = 0 ; i < size ; i++){
        printf("Element %d : ",i+1);
        scanf("%d",&array[i]);
    }
    
    printf("Enter the index to be deleted : ");
    scanf("%d",&del);
    
    for(int i = del ; i < size ; i++){
        array[i] = array[i+1];
    }
    
    for(int i = 0 ; i < size-1 ; i++){
        printf("%d , ",array[i]);
    }
    
}
