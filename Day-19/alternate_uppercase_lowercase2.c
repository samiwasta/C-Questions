#include<stdio.h>
int main(){

    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    for(int row = 1; row <= num; row++){
        for(int col = 1; col <= num; col++){
            if(col % 2 != 0){
                printf("%c", col+64);
            }
            else{
                printf("%c", col+96);
            }
        }
        printf("\n");
    }
    return 0;
}