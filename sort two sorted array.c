#include <stdio.h>

int main(){
    int size1 ;
    int size2 ;
    int array1[100];
    int array2[100];
    printf("Enter the size of the 1st array : ");
    scanf("%d",&size1);
    
    for(int i = 0 ; i < size1 ; i++){
        printf("Element %d : ",i+1);
        scanf("%d",&array1[i]);
    }
    
      printf("Enter the size of the 2st array : ");
    scanf("%d",&size2);
    
    for(int i = 0 ; i < size2 ; i++){
        printf("Element %d : ",i+1);
        scanf("%d",&array2[i]);
    }
    
    int arrayres[100];
    int i =0 , k = 0 , j = 0 ;
    
    while(i < size1 && j < size2){
        if(array1[i] <= array2[j]){
            arrayres[k++] = array1[i++];
        }else{
            arrayres[k++] = array2[j++];
        }
    }
    
    while(i < size1){
        arrayres[k++] = array1[i++];
    }
    while(j < size2){
        arrayres[k++] = array2[j++];
    }
    
    for(int i = 0 ; i  < size1+size2 ; i++){
        printf("%d ",arrayres[i]);
    }
}
