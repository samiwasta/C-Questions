#include<stdio.h>
int main(){
    int quantity = 0;
    float price = 0;
    float cost = 0;

    printf("Welcome to the Bakery Shop\n");
    printf("-------------------------------------------------\n");

    printf("Enter the quantity you want to purchase: \n");
    scanf("%d", &quantity);

    printf("Enter the price of Chocolate Cake: \n");
    scanf("%f", &price);

    cost = price * quantity;

    printf("------Invoice------\n");
    printf("Quantity: Rs.%d\n", quantity);
    printf("Price per item: Rs.%.2f\n", price);
    printf("Total cost: Rs. %.2f\n", cost);
    printf("Thank you for shopping at your bakery shop");

    return 0;
}