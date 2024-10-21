/*

1  1  1  2  1  3
2  1  2  2  2  3
3  1  3  2  3  3 
4  1  4  2  4  3

*/

#include<stdio.h>
int main(){
    int num1, num2, digit=1;

    scanf("%d %d", &num1, &num2);

    for(int row = 1; row <= num1; row++){
        for(int col = 1; col <= num2; col++){
            if(col % 2 == 0){
                printf("%2d", digit++);
            }
            else {
                printf("%2d", row);
            }
        }
        digit = 1;
        printf("\n");
    }

    return 0;

}