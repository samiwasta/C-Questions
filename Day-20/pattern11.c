/*

1   2   3   4   5
10  9   8   7   6
11  12  13  14  15
20  19  18  17  16
21  22  23  24  25

*/

#include<stdio.h>
int main(){
    int num, digit = 1;

    scanf("%d", &num);

    for(int row = 1; row <= num; row++){
        
        if(row % 2 != 0){
            for(int col = 1; col <= num; col++){
                printf("%d ", digit++);
            }
        }
        
        else {
            int temp = digit + num - 1;  
            for(int col = 1; col <= num; col++){
                printf("%d ", temp--);    
            }
            digit += num;  
        }
        printf("\n");
    }

    return 0;
}
