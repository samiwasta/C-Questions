/*

1
1  2
1  2  3
1  2  3  4  
1  2  3  4  5
1  2  3  4  
1  2  3
1  2
1

*/

#include<stdio.h>
int main(){
    int num;
    scanf("%d", &num);

    for(int row = 1; row <= num; row++){
        int digit = 1;
        for(int col = 1; col <= row; col++){
            printf("%d ", digit);
            digit++;
        }
        printf("\n");
    }

    for(int row = num-1; row >= 1; row--){
        int digit = 1;
        for(int col = 1; col <= row; col++){
            printf("%d ", digit);
            digit++;
        }
        printf("\n");
    }
    return 0;
}