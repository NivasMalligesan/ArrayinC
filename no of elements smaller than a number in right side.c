
#include <stdio.h>

int main(){
    int array[100];
    int size;
    
    printf("Enter the number of elements :");
    scanf("%d",&size);
    
    printf("Enter the elements in the array : ");
    for(int i = 0 ; i < size ; i++){
        scanf("%d",&array[i]);
    }
    
   
    int countarray[100];
    
    for(int i = 0 ; i < size ; i ++){
         int count = 0 ;
        for(int j = i+1 ; j < size ; j++ ){
            if(array[i] > array[j]){
                count++;
            }
        }
        countarray[i] = count;
    }
    
    for(int i = 0 ; i < size ; i++){
        printf("%d ",countarray[i]);
        if(i < size-1){
            printf(",");
        }
    }
}
