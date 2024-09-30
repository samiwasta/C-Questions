#include<stdio.h>
int main(){
    char ch;

    scanf("%c", &ch);

    if((ch>='A' && ch <= "Z") && !(ch>='a' && ch <= "z")){
        printf("Uppercase");
    }
    if(ch>='a' && ch <= "z"){
        printf("Lowercase");
    }

    return 0;
}