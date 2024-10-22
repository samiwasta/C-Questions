/*

1
1  2
1     3
1        4
1  2  3  4  5

*/

#include<stdio.h>
int main(){
    int num;
    scanf("%d", &num);

    for(int row = 1; row <= num; row++){
        for(int col = 1; col <= row; col++){
            if(row == num || col == 1 || row == col){
                printf("%d ", col);
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}