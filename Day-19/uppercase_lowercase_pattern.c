#include<stdio.h>
int main(){
    int num;
    printf("Enter the num: ");
    scanf("%d", &num);

    for(int row = 1; row <= num; row++){
        for(int col = 1; col <= num; col++){
            printf("%c%c", col+64, col+96);
        }
        printf("\n");
    }

    return 0;

}