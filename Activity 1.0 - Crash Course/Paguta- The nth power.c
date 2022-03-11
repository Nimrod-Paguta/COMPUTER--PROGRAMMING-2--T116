//Nimrod E. Paguta
//BSIT - 1A
//The nth power
#include <stdio.h>
int main() {
    int x, y;
    int result = 1.0;
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);

    while (y != 0) {
        result *= x;
        --y;
    }
    printf("Answer = %d", result);
    return 0;
}