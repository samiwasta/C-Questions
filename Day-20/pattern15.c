/*

A  E  I  M
B  F  J  N
C  G  K  O
D  H  L  P

*/

#include<stdio.h>
int main(){
    int num;
    
    scanf("%d", &num);
    
    for(int row = 1; row <= num; row++){
        int ch = row;
        for(int col = 1; col <= num; col++){
            printf("%c ", ch+64);
            ch += 4;
        }
        printf("\n");
    }
    return 0;
}

// #include<stdio.h>
// int main(){
//     int num;
//     scanf("%d", &num);

//     for(int row = 1; row <= num; row++){
//         for(int col = 1; col <= num; col++){
//             printf("%c ", 'A' + ((col-1)*num+(row-1)));
//         }
//         printf("\n");
//     }
//     return 0;
// }