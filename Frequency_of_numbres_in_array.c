#include <stdio.h>

int main(){
    int size;
    int array[100];
    int count = 0 ;
    int freq[100];
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    printf("Enter the elements : ");
    for(int i = 0 ; i < size ; i ++){
        scanf("%d",&array[i]);
    }
    for(int i = 0 ; i  < size ; i++){
                    count = 1;
        for (int j = i+1 ; j<size ; j ++){
            if(array[i] == array[j]){
                count++;
                array[j] = -1;
            }
        }
        freq[i] = count;
    }
    
    for(int i = 0 ; i < size ; i++){
        if(array[i] != -1 ){
            printf("%d frequency is : %d \n",array[i],freq[i]);
        }
    }
    
}
