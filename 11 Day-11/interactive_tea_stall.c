#include<stdio.h>

int main() {
    int option, quantity;
    float totalPrice = 0, paymentAmount, currentItemPrice = 0;
    char explore;

    printf("Welcome to our Tea Stall Counter! Our menu: \n\n");

    menu:

    printf("1. Tea----------------Rs.10\n");
    printf("2. Coffee-------------Rs.20\n");
    printf("3. Cold Coffee--------Rs.50\n");
    printf("4. Exit\n\n");

    printf("Choose by entering a number (1-4): \n");
    scanf("%d", &option);

    if(option == 1) {
        printf("How many cups of refreshing tea?\n\n");
        scanf("%d", &quantity);
        currentItemPrice = quantity * 10;
        printf("Added %d cup(s) of Tea for Rs. %.2f\n", quantity, currentItemPrice);
    }
    else if(option == 2) {
        printf("How many cups of aromatic coffee?\n\n");
        scanf("%d", &quantity);
        currentItemPrice = quantity * 20;
        printf("Added %d cup(s) of Coffee for Rs. %.2f\n", quantity, currentItemPrice);
    }
    else if(option == 3) {
        printf("How many cups of chilled cold coffee?\n\n");
        scanf("%d", &quantity);
        currentItemPrice = quantity * 50;
        printf("Added %d cup(s) of Cold Coffee for Rs. %.2f\n", quantity, currentItemPrice);
    }
    else if(option == 4) {
        printf("Thank you for visiting!");
        return 0;
    }
    else {
        printf("Invalid input, please enter a valid option!\n");
        goto menu; 
    }

    totalPrice += currentItemPrice;  

    printf("Total so far: Rs. %.2f\n\n", totalPrice);

    printf("Explore more or finalize? ('Y' for Yes or 'N' for No): ");
    scanf(" %c", &explore);

    if(explore == 'Y' || explore == 'y') {
        goto menu; 
    }

    printf("Final Total: Rs. %.2f\n\n", totalPrice);
    printf("Enter your payment amount: \n");
    scanf("%f", &paymentAmount);


    if(paymentAmount < totalPrice) {
        printf("Insufficient payment. Please pay Rs. %.2f more.\n", totalPrice - paymentAmount);
        printf("Re-enter payment amount: \n");
        scanf("%f", &paymentAmount);
    }

    printf("Change Rs.%.2f\n", paymentAmount - totalPrice);

    printf("Here is your final bill: ₹%.2f\n\n", totalPrice);
    printf("Thank you for visiting! We look forward to serving you again soon!\n");

    return 0;
}
