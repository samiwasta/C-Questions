#include<stdio.h>
int main(){
    int hour;

    printf("Enter the hour (24-hour format): ");
    scanf("%d", &hour);

    if(hour < 0 || hour > 24){
        printf("Invalid format");
    }
    else if(hour >= 6 && hour <= 12){
        printf("It's Morning");
    }
    else if (hour >= 13 && hour <= 18){
        printf("It's Afternoon");
    }
    else if (hour >= 17 && hour <= 21){
        printf("It's Evening");
    }
    else {
        printf("It's Night");
    }

    return 0;
}