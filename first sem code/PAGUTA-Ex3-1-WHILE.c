//Write a program that counts down from the user input to 0 using only the while loop structure.
//Nimrod E. Paguta
//BSIT-1A first sem
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number; //Integer number

    printf("Enter a value for a number\n"); //The program will display "Enter a value for a number".
    scanf("%d", &number); //Scan the number as decimal.

    while(number != 0) // Not equal to operator.
    {
        printf("\n%d", number); //The program will display the input decimal number.
        number--; //The inputed decimal number will countdown to 0.

    }
    printf("\nCount down timer has expired\n"); //Until the countdown is done the program will display the "Count down timer has expired".
    return 0;

}
