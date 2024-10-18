#include<stdio.h>
int main(){

    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    for(int row = 1; row <= num; row++){
        for(int col = 1; col <= num; col++){
            if(row % 2 != 0){
                printf("%c", row+64);
            }
            else {
                printf("%c", row+96);
            }
        }
        printf("\n");
    }

    return 0;
}