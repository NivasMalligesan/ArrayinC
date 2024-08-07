#include <stdio.h>

int main(){
    int rotation = 0 ; 
    int array[100];
    int size = 0;
    int temp = 0 ;
    printf("Enter the size array : ");
    scanf("%d",&size);
    printf("Enter the elements : ");
    
    for(int i = 0 ; i < size ; i++){
        scanf("%d",&array[i]);
    }
    for(int i = 0 ; i < size ; i++){
        printf("%d",array[i]);
    }
    
    printf("Enter the rotation : ");
    scanf("%d",&rotation);
    
    while(rotation--){
        temp = array[0];
        for(int i = 0 ; i < size-1 ; i++){
        array[i] = array[i+1];
        }
        array[size-1] = temp;
    }
      for(int i = 0 ; i < size ; i++){
        printf("%d",array[i]);
    }
    
}
