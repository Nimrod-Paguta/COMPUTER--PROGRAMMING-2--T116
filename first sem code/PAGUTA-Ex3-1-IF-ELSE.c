//Nimrod E. Paguta
//BSIT-1A
//Write a program to determine if the given grade is within the range of 1.0 to 5.0.
#include <stdio.h>
int main(void) {

int Grades;
//This program is to determine the grades of the student if she/he is passed or not.
//The grade that must be input is within the range of 1.0 to 5.0.
printf("Input your Grade!\n"); //Print the "Input your grade!"
scanf("%d", &Grades); //scan the grades as decimal.
  if(Grades<=5.0)
    printf("Good job you passed!\n");

  else
     printf("Im sorry your grades not passed.\nBetter luck next time!");
//If the grades is less than or equal to 5.0 the program will print "Good job you passed!
//If the grades is greater than 5.0 the program will print "Im sorry your grades not passed. Better luck next time!

return 0;
}
