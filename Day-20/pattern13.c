/*

A  B  C  D 
E  F  G  H
I  J  K  L
M  N  O  P
Q  R  S  T

*/

#include<stdio.h>
int main(){
    int num1, num2;
    char ch = 'A';
    scanf("%d %d", &num1, &num2);

    for(int row = 1; row <= num1; row++){
        for(int col = 1; col <= num2; col++){
            printf("%c ", ch++);
        }
        printf("\n");
    }
    return 0;
}