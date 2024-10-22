/*

1
1   2
3   4   5 
6   7   8   9
10  11  12  13  14

*/

#include<stdio.h>
int main(){
    int num, digit=1;
    scanf("%d", &num);

    for(int row = 1; row <= num; row++){
        for(int col = 1; col <= row; col++){
            if(row == 1){
                printf("%2d", 1);
            }
            else {
                printf("%2d ", digit++);
            }
        }
        printf("\n");
    }
    return 0;
}