#include <stdio.h>

int main(){
    int array[100];
    int size = 0 ; 
    
    printf("Enter the siez of the array : ");
    scanf("%d",&size);
    
    printf("Enter the elements : ");
    for(int i = 0 ; i < size ; i ++){
        scanf("%d",&array[i]);
    }
    int maxlen = 0 ;
    int len ;
    for(int i = 0 ; i < size ; i ++){
        for(int j = 0 ; j < size ; j++){
            if(array[i] == array[j]){
                    len = j - i ;  
            }
            if(maxlen < len){
                maxlen = len ;
            }
        }
    }
    
    printf("Maxlen  %d",maxlen);
}
