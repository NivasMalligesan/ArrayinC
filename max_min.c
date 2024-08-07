#include <stdio.h>
 
int main(){
    int size;
    int array[100];
    
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    printf("Enter the array elements : ");
    
    for(int i = 0 ; i < size ; i++){
        scanf("%d",&array[i]);
    }
    
    int max = array[0] ;
    int min = array[0] ;
    
    for(int i = 0 ; i < size ; i++){
        if(max < array[i]){
            max = array[i];
        }
        if(min > array[i]){
            min = array[i];
        }
    }
    printf("min : %d\n",min);
    printf("max : %d\n",max);
}
