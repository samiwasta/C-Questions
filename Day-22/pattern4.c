/*

A  B  C  D  E
    A  B  C  D
       A  B  C
          A  B
             A

*/

#include<stdio.h>
int main(){
    int num;

    scanf("%d", &num);

    for(int row = 1; row <= num; row++){
        int ch=1;
        for(int space = 1; space < row; space++){
            printf("   ");
        }
        for(int col = row; col <= num; col++){
            printf("%3c", ch+64);
            ch++;
        }
        printf("\n");
    }
    return 0;
}