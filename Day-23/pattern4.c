/*

      1
     1 1
    1 2 1
   1 3 3 1
  1 4 6 4 1
 1 5 10 10 5 1

*/

#include<stdio.h>
int main(){
    int num;
    scanf("%d", &num);

    for(int row = 1; row <= num; row++){
        for(int space = 0; space < num - row ; space++){
            printf(" ");
        }

        int val = 1;
        for(int col = 1; col <= row; col++){
            printf("%d ", val);

            val = val * (row - col) / (col);
        }
        printf("\n");
    }
    return 0;
}