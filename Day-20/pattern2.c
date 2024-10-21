/*

1  1  1  1  1
2  2  2  2  2
3  3  3  3  3
4  4  4  4  4

*/

#include<stdio.h>
int main(){
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    for(int row = 1; row <= num1; row++){
        for(int col = 1; col <= num2; col++){
            printf("%d ", row);
        }
    printf("\n");
    }

    return 0;
}