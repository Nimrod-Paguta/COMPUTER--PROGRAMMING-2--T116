//Nimrod E. Paguta
//Write a program to determine if the given grade is within the range of 1.0 to 5.0.
#include<stdio.h>
int main(void){
	int choice; //The integer is choice.

	//The program that is used is the switch case to detemine if the given grades is whithin the range of 1.0 to 5.0
	printf("Please enter your highest grade.\n"); //The program will display the message.
	printf("If your highest grade is equal to 1.0 please enter 1\n"); //The program will display the message.
	printf("If your highest grade is equal to 2.0 please enter 2\n"); //The program will display the message.
	printf("If your highest grade is equal to 3.0 please enter 3\n"); //The program will display the message.
	printf("If your highest grade is equal to 4.0 please enter 4\n"); //The program will display the message.
  printf("If your highest grade is equal to 5.0 please enter 5\n"); //The program will display the message.
	// The user must select 1 to 4 that equal to his/her grade to determine his/her grade.
	//If the grade of the user is equal to 1.0, the user input the number 1
	//If the grade of the user is equal to 2.0, the user input the number 2
	//If the grade of the user is equal to 3.0, the user input the number 3
	//If the grade of the user is equal to 4.0. the user input the number 4
	//If the grade of the user is equal to 5.0, the user input the number 5

	printf("Enter your grade: "); //The program will display the message.
  int grade; // The program declare grade as a decimal integer.
	scanf("%d", &grade); //The program scan the grade as a decimal integer.

	//The grade is declare as switch.
	//After the user enter his/her grade the program will automatic comment by the case.
	//The case is based from the input of the user. 
  //The choices of the user is only 1, 2, 3, 4, and 5 if the user input greater than 5 the program will comment "invalid". 
	//case 1 is the number 1
	//case 2 is the number 2
	//case 3 is the number 3
	//case 4 is the number 4
	//case 5 is the number 5
	switch(grade){
      case 1:
              printf("Outstanding!\n");
	    	  printf("Your grade is being processed. Thank you for participation!\n");
	    	break; //Break is to stop the program after the user input the grades. 
               //Break statement is used to terminate the switch case
      case 2:
	        printf("Excellent!\n");
	        printf("Your grade is being processed. Thank you for participation!\n");
	        break;
      case 3:
	        printf("Perfect!\n");
	        printf("Your grade is being processed. Thank you for participation!\n");
	        break;
      case 4:
	        printf("Very good!\n");
	        printf("Your grade is being processed. Thank you for participation!\n");
	        break;
      case 5:
	        printf("That's great!\n");
	        printf("Your grade is being processed. Thank you for participation!\n");
          break;

      default:
	        printf("Sorry, the grade you enter is invalid.\n");
	        printf("Please try again. Thanks!\n");
	        break; 
          //Break is to help terminate the switch case if no break appears the flow of control will fall. 
          //ones the input is done the program will comment and stop. 
        
	}
	return 0;
}

