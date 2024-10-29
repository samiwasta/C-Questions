#include<stdio.h>
int main(){
    int arr[3] = {1,2,3};

    int rotated[3] = {arr[1], arr[2], arr[0]};

    printf("Rotated left: %d %d %d", rotated[0], rotated[1], rotated[2]);

    return 0;
}