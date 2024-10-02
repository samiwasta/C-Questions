#include<stdio.h>
int main(){
    
    int costPrice, sellingPrice, profit, loss;

    printf("Enter Cost Price (CP): \n");
    scanf("%d", &costPrice);

    printf("Enter Selling Price (SP): \n");
    scanf("%d", &sellingPrice);

    if(costPrice < 0 || sellingPrice < 0){
        printf("Cost Price or Selling Price cannot be negative");
    }
    else if(sellingPrice > costPrice){
        profit = sellingPrice - costPrice;
        printf("Profit per unit: %d₹\n", profit);
        profit *= 100;
        printf("Total Profit on 100 units: %d₹", profit);
    }
    else if(sellingPrice < costPrice){
        loss = costPrice - sellingPrice;
        printf("Loss per unit: %d₹\n", loss);
        loss *= 100;
        printf("Total Loss on 100 units: %d₹", loss);
    }
    else {
        printf("There is no Profit or Loss");
    }

    return 0;
}