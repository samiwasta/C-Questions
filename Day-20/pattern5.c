/*

5  4  3  2  1
5  4  3  2  1
5  4  3  2  1
5  4  3  2  1
5  4  3  2  1

*/

#include<stdio.h>
int main(){
    int num, digit;

    scanf("%d", &num);

    for(int row = 1; row <= num; row++){
        for(int col = num; col >= 1; col--){
            printf("%d ", col);
        }
        printf("\n");
    }

    return 0;
}