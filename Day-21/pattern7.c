/*

1
3  5
5  7   9
7  9   11  13
9  11  13  15  17

*/

#include<stdio.h>
int main(){
    int num, oddDigit=1;
    
    scanf("%d", &num);
    
    for(int row = 1; row <= num; row++){
        for(int col = 1; col <= row; col++){
            if(row == 1 && col == 1){
                printf("%d ", 1);
            }
            else{
               printf("%d ", oddDigit+=2); 
            }
        }
        oddDigit = 2 * row - 1;
        printf("\n");
    }
    return 0;
}