//Write a program to determine if the given grade is within the range of 1.0 to 5.0.
//Nimrod E. Paguta
//BSIT-1A First sem.
#include <stdio.h>
int main(void){
    //This program is to determine if the given grade is within the range of 1.0 to 5.0.
    //The program has different comment in every grade that input by the user.
  int Grades; // The integer is Grades.
  printf("Hi Good day! This is Prof. Nimrod Paguta!\nPlease input your highest grade from first sem.\n"); //The program will display the message.
  printf("The grade must be input within the range of 1.0 to 5.0\n"); // The program will display the message.

printf("Input your highest grade:\n"); //The program will display the message.
scanf("%d",&Grades); //the program will scan the grades as a decimal.
if(Grades<=1.0){
  printf("Outstanding!"); //If the Grades is less than or equal to 1.0 the program will comment "Outstanding!".
}
else if(Grades<=2.0){
  printf("Excellent!"); //If the Grades is less than or equal to 2.0 the program will comment "Excellent!".
}
else if(Grades<=3.0){
  printf("Perfect!"); //If the Grades is less than or equal to 3.0 the program will comment "Perfect!".
}
else if(Grades<=4.0){
  printf("Very good!"); //If the Grades is less than or equal to 4.0 the program will comment "Very good!".
}
else if(Grades<=5.0){
  printf("That's great!"); //If the Grades is less than or equal to 5.0 the program will comment "That's great".
}else{
  printf("Invalid"); //If the grades is greater than 5.0 the program will comment "Invalid".
}
return 0;
}
