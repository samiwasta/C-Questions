/*

#  0  0  0  #
0  #  0  #  0
0  0  #  0  0
0  #  0  #  0
#  0  0  0  #

*/

#include<stdio.h>
int main(){
    int num;
    scanf("%d", &num);

    for(int row = 1; row <= num; row++){
        for(int col = 1; col <= num; col++){
            if(row == col || (row + col) == num + 1){
                printf("# ");
            }
            else {
                printf("0 ");
            }
        }
        printf("\n");
    }
    return 0;
}