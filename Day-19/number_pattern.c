#include<stdio.h>
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

        for(int row = 1; row <= num; row++){
            for(int col = 1; col <= (num-row); col++){
                printf("1 ");
            }
            for(int col = 1; col <= row; col++){
                printf("%d ", row);
            }

            printf("\n");
        }
        return 0;
    }