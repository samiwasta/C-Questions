/*

1   2   3   4   5
6   7   8   9   10
11  12  13  14  15
16  17  18  19  20
21  22  23  24  25

*/

#include<stdio.h>
int main(){
    int num, digit=1;

    scanf("%d", &num);

    for(int row = 1; row <= num; row++){
        for(int col = 1; col <= num; col++){
            printf("%4d", digit++);
        }
        printf("\n");
    }
    return 0;
}