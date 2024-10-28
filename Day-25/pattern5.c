/*
        *       
      * * *    
    * * * * *   
  * * * * * * *    
* * * * * * * * *  
  * * * * * * *  
    * * * * *    
      * * *     
        *  
*/

#include<stdio.h>
int main(){
    int num;
    scanf("%d", &num);

    for(int row = 1; row <= num; row++){
        for(int space = 1; space <= num - row; space++){
            printf("   ");
        }
        for(int col = 1; col <= 2*row-1; col++){
            printf("*  ");
        }
        printf("\n");
    }
    for(int row = num-1; row >= 1; row--){
        for(int space = 1; space <= num - row; space++){
            printf("   ");
        }
        for(int col = 1; col <= 2*row-1; col++){
            printf("*  ");
        }
        printf("\n");
    }
    return 0;
}