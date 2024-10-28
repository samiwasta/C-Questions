/*

            1
         2  1  2
      3  2  1  2  3
   4  3  2  1  2  3  4

*/

#include<stdio.h>
int main(){
    int num, digit;
    scanf("%d", &num);

    for(int row = 1; row <= num; row++){
        digit = row;;
        for(int space = 1; space <= num - row; space++){
            printf("   ");
        }
        for(int col = 1; col <= 2*row-1; col++){
            printf("%d  ", digit);

            if(col < row){
                digit--;
            }
            else {
                digit++;
            }
        }
        printf("\n");
    }
    return 0;
}