/*

1 2 3 4 5
 1 2 3 4
  1 2 3
   1 2
    1

*/

#include<stdio.h>
int main(){
    int num;
    scanf("%d", &num);

    for(int row = 1; row <= num; row++){
        int digit = 1;
        for(int space = 1; space < row; space++){
            printf(" ");
        }

        for(int col = row; col <= num; col++){
            printf("%d ", digit++);
        }
        printf("\n");
    }
    return 0;
}