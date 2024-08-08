#include <stdio.h>

int main(){
    int array[100];
    int size ;
    int zeros = 0 ; 
    
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    
    for(int i = 0 ; i < size ; i ++){
        scanf("%d",&array[i]);
    }
    
    for(int i = 0 ; i < size ; i++){
        if(array[i] == 0 ){
            zeros++;
        }
    }   
    
    int newindex = 0 ;
    
    for(int i = 0 ; i<size ; i ++ ){
        if(array[i] != 0){
            array[newindex]=array[i];
            newindex++;
        }else{
            zeros++;
        }
    }
    
    for(int i = newindex ; i < size; i++ ){
            array[i] = 0 ;
    }
    printf("[");
    for(int i = 0 ; i < size ; i++){
        printf("%d",array[i]);
        if(i < size-1){
            printf(",");
        }
    }
    printf("]");
}
