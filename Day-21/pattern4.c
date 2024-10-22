/*

0  0  0  0  1
0  0  0  1  1
0  0  1  1  1
0  1  1  1  1
1  1  1  1  1

*/

#include<stdio.h>
int main(){
    int num;
    scanf("%d", &num);

    for(int row = 1; row <= num; row++){
        for(int col = 1; col <= num; col++){
            if(col <= num - row){
                printf("0 ");
            }
            else {
                printf("1 ");
            }
        }
        printf("\n");
    }
    return 0;
}