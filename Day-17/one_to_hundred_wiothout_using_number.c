// WAP to print 1 to 100  without using any single number

#include <stdio.h>

int main() {
    int start = 'A' - 'A' + 1; 
    int end = 'd';

    while (start <= end) {
        printf("%d\n", start);
        start++;
    }

    return 0;
}
