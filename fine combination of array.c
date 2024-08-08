#include <stdio.h>

int main() {
    int array[100];
    int size = 0;
     printf("Enter the size of the array : ");
     scanf("%d",&size);
     
     for(int i = 0 ; i < size ; i++){
         printf("Enter the element %d : ",i+1);
         scanf("%d",&array[i]);
     }
     int sum ;
     printf("Enter the sum :");
     scanf("%d",&sum);
     for(int i = 0 ; i < size ; i++){
         for(int j = i+1 ; j < size ; j++){
             
             if(array[i]+array[j] == sum){
                 printf("(%d,%d)",array[i],array[j]);
             }
         }
     }
    return 0;
}
