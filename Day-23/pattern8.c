/*

E  D  C  B  A
E  D  C  B
E  D  C  
E  D
E

*/

#include<stdio.h>
int main(){
    int num;

    scanf("%d", &num);

    for(int row = 1; row <= num; row++){
        int ch = num;
        for(int col = num; col >= row; col--){
            printf("%c ", ch+64);
            ch--;
        }
        printf("\n");
    }
    return 0;
}