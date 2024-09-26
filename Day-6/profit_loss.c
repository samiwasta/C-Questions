#include<stdio.h>
int main(){
    int profit = 0;
    int loss = 0;
    int sellingPrice = 0;
    int costPrice = 0;
    int profitPercentage = 0;
    int lossPercentage = 0;

    printf("Enter the Cost Price of item: ");
    scanf("%d", &costPrice);

    printf("Enter the Selling Price of item: ");
    scanf("%d", &sellingPrice);

    profit = sellingPrice - costPrice;
    loss = costPrice - sellingPrice;
    profitPercentage = (profit * 100) / costPrice;
    lossPercentage = (loss * 100) / costPrice;

    printf("Profit: %d\n", profit);
    printf("Loss: %d\n", loss);
    printf("Profit Percentage: %d\n", profitPercentage);
    printf("Loss Percentage: %d", lossPercentage);

    return 0;
}