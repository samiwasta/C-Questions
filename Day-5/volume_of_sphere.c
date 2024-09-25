#include<stdio.h>
int main(){
    int radius = 0;
    float volume = 0;

    printf("Welcome to Sphere Volume Calculator!\n\n");

    printf("Enter the radius of the sphere: \n\n");
    scanf("%d", &radius);

    volume = (4.0/3.0)*3.14159*radius*radius*radius;

    printf("Volume of the sphere is: %.2f cubic units", volume);

    return 0;
}