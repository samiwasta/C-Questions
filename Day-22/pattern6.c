/*

1  2  3  4  5
2  2  3  4  5
3  3  3  4  5
4  4  4  4  5
5  5  5  5  5

*/

#include<stdio.h>
int main(){
    int num;

    scanf("%d", &num);

    for(int row = 1; row <= num; row++){
        for(int col = 1; col <= num; col++){
            if(col < row){
                printf("%d ", row);
            }
            else {
                printf("%d ", col);
            }
        }
        printf("\n");
    }
    return 0;
}