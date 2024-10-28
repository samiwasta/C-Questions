/*

            1
         3  2  1
      5  4  3  2  1
   7  6  5  4  3  2  1
9  8  7  6  5  4  3  2  1

*/

#include<stdio.h>
int main(){
    int num, digit;
    scanf("%d", &num);

    for(int row = 1; row <= num; row++){
        digit = 2 * row - 1;
        for(int space = 1; space <= num - row; space++){
            printf("   ");
        }
        for(int col = 1; col <= 2*row-1; col++){
            printf("%d  ", digit);
            digit--;
        }
        printf("\n");
    }
    return 0;
}