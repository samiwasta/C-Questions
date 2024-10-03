#include<stdio.h>

int main(){
    int age;
    float height;
    char vip;
    float ticket = 0, finalTicket = 0, additionalCharge = 0, discount = 0, vipDiscount = 0;

    printf("Enter the age: \n");
    scanf("%d", &age);

    printf("Enter the height in centimeters: \n");
    scanf("%f", &height); 

    printf("Do you have VIP pass (y or n)? \n\n");
    scanf(" %c", &vip);

  
    if(age >= 0 && age < 3){
        ticket = 0;
    }
    else if(age >= 3 && age <= 12){
        ticket = 20;
    }
    else if(age >= 13 && age <= 63){
        ticket = 100;
    }
    else if(age >= 64) {
        ticket = 50;
    }
    else {
        printf("Please enter a valid age.\n");
        return 0;  
    }


    if(height > 180){
        additionalCharge = 50;
    }
    else if(height >= 120 && height <= 180){
        finalTicket = ticket;
    }
    else if(height < 120){
        discount = ticket * 0.5;
    }
    else {
        printf("Enter a valid height.\n");
        return 0;  
    }

    finalTicket = ticket + additionalCharge - discount;

    if(vip == 'y'){
        vipDiscount = 10;
        finalTicket = finalTicket * 0.9; 
    }

    printf("Age: %d\n", age);
    printf("Height: %.2fcm\n", height);
    printf("Vip pass (y or n): %c\n\n", vip);
    printf("Base Ticket: ₹%.2f\n", ticket);
    printf("Additional Charges: +₹%.2f\n", additionalCharge);
    printf("Discount Charges: -%.2f\n", discount);
    printf("Vip Pass Discount: -%.0f%%\n\n", vipDiscount);
    printf("Final Ticket: ₹%.2f", finalTicket);

    return 0;
}
