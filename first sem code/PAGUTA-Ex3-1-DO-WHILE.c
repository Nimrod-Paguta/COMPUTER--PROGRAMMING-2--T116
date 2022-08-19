//Write a program that will keep asking the user “Do you want to continue?” and gives the user a choice between “Yes” and “No. It continues if the user chooses “Yes”. It ends only when the use chooses“No”. Use only the do...while loop structure.
//Nimrod E. Paguta
//BSIT- 1A first sem
#include <stdio.h>

int main()
{
    char s; //char is character variable.
            //The character I used is letter s.

    do
    {
        printf("Do you want to continue?\n");//The program will display the "Do you want to continue?".
        printf("Type y for yes and type n for no\n"); //The program will display this questions.
        scanf("%c", &s); //The character scan as s.

        //The program will display it double.
        fflush(stdin);//To fix this issue I used built- in method called fflush, it flushes the buffer present inside the input device and the case is in the keyboard.
                      //If it is not specify the fflush and pass it an argument that is stdin and then it thinks that the user has input something through the input device taht is keyboard and it is keeps waiting for the buffer to be clear.
                      //So i clear it by my self by using the fflush method.


    }while (s == 'y'); //This is infinite looping, the program will always continue if the user input y as yes.
                       //If the user input n as no the program will stop.


    return 0;

}
