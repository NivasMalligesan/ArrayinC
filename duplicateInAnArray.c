#include <string.h>
#include <stdio.h>

int main(){
    int array[1000];
    printf("Enter the size array : ");
    int size ;
    scanf("%d",&size);
    int count =0 ;
    for(int i = 0 ; i < size ; i ++){
        scanf("%d",&array[i]);
    }
    
    for(int i = 0 ; i < size ; i++){
        for(int j = i+1 ; j < size ; j++){
            if(array[i]==array[j]){
                count=count+1;
                break;
            }
        }
    }
    printf("%d",count);
}
