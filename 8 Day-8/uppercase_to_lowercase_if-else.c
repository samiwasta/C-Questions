#include<stdio.h>
int main(){
    char ch;

    scanf("%c", &ch);

    if((ch >= 'A' && ch <= 'Z') && !(ch >= 'a' && ch <= 'z')){
        printf("%c", ch+32);
    }
    else{
        printf("%c", ch);
    }

    return 0;
}