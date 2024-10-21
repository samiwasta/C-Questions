/*

1   6   11   16  
2   7   12   17
3   8   13   18
4   9   14   19
5   10  15   20

*/

#include<stdio.h>
int main(){
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    for(int row = 1; row <= num1; row++){
        for(int col = 1; col <= num2; col++){
            printf("%3d ", row + (col - 1) * num1);
        }
        printf("\n");
    }
    return 0;
}