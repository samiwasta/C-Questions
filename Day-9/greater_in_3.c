#include<stdio.h>
int main(){
    int a,b,c;

    scanf("%d %d %d", &a, &b, &c);

    if(a==b && b==c){
        printf("All the numbers are equal");
    }
    else if((a==b) > c){
        printf("%d", a);
    }
    else if((b==c) > a){
        printf("%d", b);
    }
    else if((a==c) > b){
        printf("%d", c);
    }
    else if(a > b && a > c){
        printf("%d", a);
    }
    else if(b > c){
        printf("%d", b);
    }
    else {
        printf("%c", c);
    }

    return 0;
}