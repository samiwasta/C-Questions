#include<stdio.h>
int main(){
    int seconds = 0;
    int minutes = 0;
    int hours = 0;

    printf("Enter the seconds: ");
    scanf("%d", &seconds);

    hours = seconds / 3600;

    minutes = (seconds - 3600) / 60;

    seconds = (seconds - 3600 - 60);

    printf("%d hours\n %d minutes\n %d seconds", hours, minutes, seconds);

    return 0;
}