#include<stdio.h>
int main(){
    int tea = 0;
    int coffee = 0;
    int biscuits = 0;
    int cost = 0;

    printf("Welcome to Tasty Treats Cafe! We provide a delightful selection of beverages and snacks to satisfy your cravings, and we are eager to serve you! Let's calculate your bill based on your preferences.\n\n");

    printf("Each cup of tea costs ₹15, each cup of coffee costs ₹25, and each biscuit costs ₹10\n\n");

    printf("How many cups of tea would you like to order ? : \n");
    scanf("%d", &tea);

    printf("How many cups of coffee would you like to order ? : \n");
    scanf("%d", &coffee);

    printf("How many biscuits would you like to order ? : \n\n");
    scanf("%d", &biscuits);

    cost = (tea * 15) + (coffee * 25) + (biscuits * 10);

    printf("%d cups of tea\n", tea);
    printf("%d cups of coffee\n", coffee);
    printf("%d buscuits\n", biscuits);
    printf("Total Bill Amount: ₹%d\n\n", cost);
    printf("Thank you for choosing Tasty Treats Cafe! Please let us know your order, and we will be more than happy to serve you.");

}