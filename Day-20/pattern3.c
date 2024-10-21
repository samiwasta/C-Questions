/*

1  2  3  4  5
1  2  3  4  5
1  2  3  4  5
1  2  3  4  5

*/

#include<stdio.h>
int main(){
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    for(int row = 1; row <= num1; row++){
        for(int col = 1; col <= num2; col++){
            printf("%d ", col);
        }
    printf("\n");
    }

    return 0;
}