#include<stdio.h>

int main() {
    int vehicle, age, numberOfTyre, option, bill;
    char name[20];

    printf("Welcome to Service Center\n\n");

    printf("Name of the owner: \n");
    scanf("%s", name); // or use fgets(name, 20, stdin); for full name with spaces

    printf("Please enter your vehicle type (2 wheeler / 3 wheeler / 4 wheeler): \n");
    scanf("%d", &vehicle);

    // Correcting the vehicle condition to accept only 2, 3, or 4-wheelers
    if(vehicle != 2 && vehicle != 3 && vehicle != 4) {
        printf("This service is not accepting vehicles other than 2 wheeler, 3 wheeler, and 4 wheeler\n");
    } 
    else {
        printf("What is the age of the vehicle (in months)?\n");
        scanf("%d", &age);

        if(age < 8) {
            printf("Your vehicle service will be done after a while.\n");
        } 
        else {
            printf("Options:\n");
            printf("1) Enter 1 for tyre problem\n");
            printf("2) Enter 2 for fuel problem\n");
            printf("3) Enter 3 for engine issue\n");
            printf("4) Enter 4 for general services\n");

            scanf("%d", &option);

            if(option == 1) {
                printf("How many tyres are you facing issues with?\n");
                scanf("%d", &numberOfTyre);

                printf("Tyre cost is Rs. 400\n\n");

                bill = numberOfTyre * 400;

                printf("Here is the bill\n\n\n");

                printf("Name of the owner: %s\n", name);
                printf("Type of vehicle: %d wheeler\n", vehicle);
                printf("Issue: Tyre issue\n");
                printf("Bill: Rs.%d\n", bill);
            } 
            else if(option == 2) {
                printf("Name of the owner: %s\n", name);
                printf("Type of vehicle: %d wheeler\n", vehicle);
                printf("Issue: Fuel issue\n");
                printf("Bill: Rs.1500\n");
            } 
            else if(option == 3) {
                printf("Name of the owner: %s\n", name);
                printf("Type of vehicle: %d wheeler\n", vehicle);
                printf("Issue: Engine issue\n");
                printf("Bill: Rs.5000\n");
            } 
            else if(option == 4) {
                printf("Name of the owner: %s\n", name);
                printf("Type of vehicle: %d wheeler\n", vehicle);
                printf("Issue: General Servicing\n");
                printf("Bill: Rs.1000\n");
            } 
            else {
                printf("Invalid Service\n");
            }
        }
    }

    return 0;
}
