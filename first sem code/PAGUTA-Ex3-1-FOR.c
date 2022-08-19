//Nimrod E. Paguta
//BSIT-1A
//Write a program to generate a multiplication table for an integer entered by the user. Use only the for loop structure.
#include <stdio.h>

int main()
{
  int num, count; //The integer is num and count
  printf("Enter a number:\n"); //Display "Enter a number".
  scanf("%d", &num); //scan num as a decimal integers.

  printf("Multiplacation table for %d is: \n", num); //The program will display the " Multiplacation table for %d is:".
  //The %d is stands for decimal integer.
  //The %d change into decimal number that inputed by the user.
  for(count= 1; count<= 10; count++) // count as 1, count is less than or greater than 10, count may add up to equal 10.
{
  printf("%d x %d = %d\n", num, count, (num * count));
  //the program will display the multiplacation table for what the user input.
  //If the user input 1 the program will count into 10 and multiply the 1 into 10.
}

return 0;
}
