//PAGUTA
//OCIER
//A program that takes in a number as user input, tests if it is odd or even, and prints the result.
#include <stdio.h>
int main() {
    int num;
    printf("Enter an integer: "); //input number.
    scanf("%d", &num); //scan the imput number.

    // true if num is perfectly divisible by 2
    if(num % 2 == 0)
        printf("%d is even.", num);
    else
        printf("%d is odd.", num);
//this program help us to know the even and odd from numbers we input. 
    
    return 0;
}