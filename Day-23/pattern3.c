/*

5 5 5 5 5
 4 4 4 4
  3 3 3
   2 2
    1
   2 2
  3 3 3
 4 4 4 4
5 5 5 5 5

*/

#include<stdio.h>
int main(){
    int num;
    scanf("%d", &num);
    int digit = num;
    for(int row = 1; row<= num; row++){
        for(int space = 1; space < row; space++){
            printf(" ");
        }
        for(int col = row; col <= num; col++){
            printf("%d ", digit);
        }
        digit--;
        printf("\n");
    }

       for(int row = 2; row <= num; row++){
        for(int space = 1; space < (num-row+1); space++){
            printf(" ");
        }
        for(int col = 1; col <= row; col++){
            printf("%d ", row);
        }
        printf("\n");
    }
    return 0;
}