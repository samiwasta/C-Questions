/*

#  #  #  #  #
#           #
#           #
#           #
#  #  #  #  #

*/

#include<stdio.h>
int main(){
    int num;
    scanf("%d", &num);

    for(int row = 1; row <= num; row++){
        for(int col = 1; col <= num; col++){
            if(row == 1 || col == 1 || row == num || col == num){
                printf("# ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}