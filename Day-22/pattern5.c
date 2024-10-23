/*

0  1   1    2    3
   5   8    13   21
       34   55   89
            144  233
                 377

*/

#include<stdio.h>
int main(){
    int num, prev = 1, nextPrev = 0;
    scanf("%d", &num);

    for(int row = 1; row <= num; row++){
        for(int space = 1; space < row; space++){
            printf("    ");
        }
        for(int col = row; col <= num; col++){
            if(row == 1 && col == 1){
                printf("%4d", 0);
            }
            else if(row == 1 && col == 2){
                printf("%4d", 1);
            }
            else {
                int current = prev + nextPrev;
                printf("%4d", current);

                nextPrev = prev;
                prev = current;
            }
        }
        printf("\n");
    }
    return 0;
}