#include<stdio.h>
int main(){

    int units;
    float bill;

    printf("Enter the electricity units consumed: \n");
    scanf("%d", &units);
    
    if(units <= 50){
        bill = units * 0.50;
    }
    else if(units <= 100){
        bill = ((units-50) * 0.50) + units * 0.75;
    }
    else if(units <= 150){
        bill = ((units-50) * 0.50) + ((units-100) * 0.75) + units * 1.20;
    }
    else if(units >= 250){
        bill = ((units-50) * 0.50) + ((units-100) * 0.75) + ((units-150) * 1.20) + units * 1.50;
    }
    else {
        printf("Enter valid units");
    }

    bill = bill + bill * 0.20;
    printf("Total electricity bill: %.2f", bill);

    return 0;
}