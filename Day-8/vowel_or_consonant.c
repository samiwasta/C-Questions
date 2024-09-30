#include<stdio.h>
int main(){
    char ch;

    scanf("%c", &ch);

    if(ch == 'A' || ch == 'E' ||ch == 'I' ||ch == 'O' ||ch == 'U' ||ch == 'a' ||ch == 'e' ||ch == 'i' ||ch == 'o' ||ch == 'u'){
        printf("Vowel");
    }
    if(!(ch == 'A' || ch == 'E' ||ch == 'I' ||ch == 'O' ||ch == 'U' ||ch == 'a' ||ch == 'e' ||ch == 'i' ||ch == 'o' ||ch == 'u')){
        printf("Consonant");
    }

    return 0;
}