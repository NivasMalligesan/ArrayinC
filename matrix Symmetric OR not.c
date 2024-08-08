#include <stdio.h>

int main(){
    int row = 0 , column = 0  ; 
    printf("Enter the row and column ");
    scanf("%d%d",&row,&column);
    
    if(row < 0 ){
        printf("Invalid Row value");
        return 0 ;
    }else if(column < 0 ){
        printf("Invalid Column value");
        return 0;
    }
    
    int array[row][column];
    
    for(int i = 0 ; i < row ; i ++){
        for(int j = 0 ; j < column ; j ++){
            scanf("%d",&array[i][j]);
        }
    }
    
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < column ; j++){
            if(array[i][j] != array[j][i]){
                printf("Not symmetric");
                return 0 ;
            }
        }
    }
    
    printf("Symmetric");
    
}
