/*

            *
         *  *  *
      *  *  *  *  *
   *  *  *  *  *  *  *
*  *  *  *  *  *  *  *  *

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
    return 0;
}