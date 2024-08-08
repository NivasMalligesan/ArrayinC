#include <stdio.h>

int main(){
    int array[1000] ;
    int size = 0;
    
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    
    printf("Enter the elements of the array : ");
    for(int  i = 0 ; i < size ; i++){
        scanf("%d",&array[i]);
    }
    
    for(int i = 0 ; i < size ;i++){
        int val = array[i];
        
        for(int i = 2 ; i < val/2 ; i++){
            if(val%i == 0){
                break;
            }else{
                printf("%d ",val);
                break;
            }
        }
    }
}
