/*

    1
   1 2 1
  1 2 3 2 1
 1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1
 1 2 3 4 3 2 1
  1 2 3 2 1
   1 2 1
    1

*/

#include<stdio.h>
int main(){
    int num;
    scanf("%d", &num);

    // Upper half of the pattern
    for(int row = 1; row <= num; row++){
        int digit = 1;
        for(int space = 1; space <= (num - row); space++){
            printf(" ");
        }
        for(int col = 1; col <= row; col++){
            printf("%d ", digit++);
        }

        digit = row - 1;
        for(int col = row - 1; col >= 1; col--){
            printf("%d ", digit--);
        }
        printf("\n");
    }
 
    for(int row = num - 1; row >= 1; row--){
        int digit = 1;
        for(int space = 1; space <= (num - row); space++){
            printf(" ");
        }
        for(int col = 1; col <= row; col++){
            printf("%d ", digit++);
        }

        digit = row - 1;
        for(int col = row - 1; col >= 1; col--){
            printf("%d ", digit--);
        }
        printf("\n");
    }

    return 0;
}
