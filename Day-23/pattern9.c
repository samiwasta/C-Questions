/*

            *
         *  *
      *     *
   *        *
*  *  *  *  *

*/

#include<stdio.h>
int main(){
    int num;

    scanf("%d", &num);

    for(int row = 1; row <= num; row++){
        for(int space = 1; space <= (num-row); space++){
            printf(" ");
        }

        for(int col = 1; col <= row; col++){
            if(col == 1||col == row || row == num){
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}