#include <stdio.h>

int main(){
    int array[100];
    int size;
    int resarray[100];
    
    printf("Enter the number of elements in tha array : ");
    scanf("%d",&size);
    
    printf("Enter the Elements in the array : ");
    for(int  i = 0 ; i < size ; i++){
        scanf("%d",&array[i]);
    }
    
    for(int i = 0 ; i < size ; i++){
        int count = 0 ; 
        for(int j = 0 ; j < size ; j++){
            if(array[i] > array[j]){
                count++;
            }
        }
        resarray[i] = count;
    }
    
    for(int i = 0 ; i < size ; i++){
        printf("%d",resarray[i]);
    }
}
