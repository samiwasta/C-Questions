#include<stdio.h>
int main(){
    int a,b,c;

    scanf("%d %d %d", &a, &b, &c);

    if(a==b && b==c){
        printf("All the numbers are equal");
    }
    else if((a==b) > c){
        printf("a & b are greater");
    }
    else if((b==c) > a){
        printf("b & c are greater");
    }
    else if((a==c) > b){
        printf("a & c are greater");
    }
    else if(a > b && a > c){
        printf("a is greater");
    }
    else if(b > c){
        printf("b is greater");
    }
    else {
        printf("c is greater");
    }
}