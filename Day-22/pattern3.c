/*

 5  4  3  2  1
    4  3  2  1
       3  2  1
          2  1
             1

*/

#include<stdio.h>
int main(){
    int num, digit;

    scanf("%d", &num);

    for(int row = 1; row <= num; row++){
        digit = (num-row)+1;

        for(int space = 1; space < row; space++){
            printf("   ");
        }
        for(int col = row; col <= num; col++){
            printf("%3d", digit--);
        }
        printf("\n");
    }
    return 0;
}