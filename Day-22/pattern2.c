/*

1  2  3  4  5
   4  6  8 10
      9 12 15
        16 20
           25

*/

#include<stdio.h>

int main(){
    int num, digit = 1;

    scanf("%d", &num);

    for(int row = 1; row <= num; row++){
        int n = row;
        for(int space = 1; space < row; space++){
            printf("   "); 
        }
 
        for(int col = row; col <= num; col++){
            printf("%2d ", digit); 
            digit += row;
        }

        n++;
        digit = n * n;

        printf("\n");
    }
    
    return 0;
}
