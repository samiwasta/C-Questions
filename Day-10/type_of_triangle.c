#include<stdio.h>
int main(){
    int side1, side2, side3;

    scanf("%d %d %d", &side1, &side2, &side3);

    if(side1 <= 0 || side2 <= 0 || side3 <= 0){
        printf("The sides should be positive");
    }
    else if(side1 == side2 && side1 == side3){
        printf("The triangle is equilateral");
    }
    else if(side1 == side2 || side1==side3){
        printf("The triangle is isosceles");
    }
    else {
        printf("The triangle is scalene");
    }

    return 0;
}