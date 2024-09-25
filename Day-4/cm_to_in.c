#include<stdio.h>
int main(){
    float cm = 0;
    float in = 0;

    printf("Enter cm: ");
    scanf("%f", &cm);

    in = cm * 0.3937;

    printf("%.4f", in);

    return 0;
}