#include<stdio.h>
int main(){
    int costPrice = 0;
    int repairCost = 0;
    int colouringCost = 0;
    int accessoriesCost = 0;
    int desiredProfit = 0;
    int sellingPrice = 0;

    printf("Enter the Cost Price: ");
    scanf("%d", &costPrice);

    printf("Enter the Repair Cost: ");
    scanf("%d", &repairCost);

    printf("Enter the Colouring Cost: ");
    scanf("%d", &colouringCost);

    printf("Enter the Accessories Cost: ");
    scanf("%d", &accessoriesCost);

    printf("Enter the Desired Profit: ");
    scanf("%d", &desiredProfit);

    printf("\n\n");

    sellingPrice = costPrice + repairCost + colouringCost + accessoriesCost + desiredProfit;

    printf("Cost Price: %d\n", costPrice);
    printf("Repair Cost: %d\n", repairCost);
    printf("Colouring Cost: %d\n", colouringCost);
    printf("Accessories Cost: %d\n", accessoriesCost);
    printf("Desired Profit: %d\n\n", desiredProfit);
    printf("Selling Price: %d", sellingPrice);

    return 0;
}