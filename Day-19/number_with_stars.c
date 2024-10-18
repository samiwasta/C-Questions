#include<stdio.h>
int main(){

    int num1, num2, digit = 1;
    printf("Enter the number: ");
    scanf("%d %d", &num1, &num2);

    for(int row = 1; row <= num1; row++){
        for(int col = 1; col <= num2; col++){
            if(row == 1 || col == 1 || row == num1 || col == num2){
                printf("%d", digit);
                digit++;
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}