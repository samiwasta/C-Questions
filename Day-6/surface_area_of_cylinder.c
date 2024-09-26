#include<stdio.h>
int main(){
    const float pi = 3.14159;

    float radius = 0;
    float height = 0;

    float area = 0;

    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    area = (2 * pi * radius * radius) + (2 * pi * radius * height);

    printf("Radius: %.2f\n", radius);
    printf("Height: %.2f\n", height);
    printf("Surface Area: %.2f", area);

    return 0;
}