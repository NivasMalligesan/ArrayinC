#include <stdio.h>

int main(){
    int array[100];
    int size = 0 ; 
    
    printf("Enter the size : ");
    scanf("%d",&size);
    
    printf("Enter the elements : ");
    for(int i = 0 ; i < size ; i++)
    scanf("%d",&array[i]);
    
    int resarray[1000];
    
    for(int i = 0 ; i < size ; i ++){
        int value = array[i];
        int digit[100];
        int dig_count = 0 ;
        
        while(value > 0){
            digit[dig_count++] = value % 10;
            value = value / 10;
        }
        
        for(int i = dig_count-1 ; i >= 0 ; i--){
            printf("%d ",digit[i]);
        }
        
    }
}
