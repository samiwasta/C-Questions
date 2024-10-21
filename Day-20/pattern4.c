/*

5  5  5  5  5
4  4  4  4  4
3  3  3  3  3  
2  2  2  2  2

*/

#include<stdio.h>
int main(){
    int num1, num2, digit;

    scanf("%d %d", &num1, &num2);

    digit = num2;

    for(int row = 1; row <= num1; row++){
        for(int col = 1; col <= num2; col++){
            printf("%d ", digit);
        }
        digit--;
        printf("\n");
    }

    return 0;
}