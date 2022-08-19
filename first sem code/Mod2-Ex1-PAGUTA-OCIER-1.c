#include <stdio.h>
#include <stdlib.h>
//PAGUTA
//OCIER
//A program that computes for the area of the triangle using the formula area=1/2bh, where b=base, and h=height of the triangle are entered by the user.
int main()
{
//The user must input the base, height and area to compute.
    int base, height, area;
    printf("Input base: "); //input the number of base. 
    scanf("%d" , &base); 
    printf("Input height "); //input the number of height. 
    scanf("%d" , &height); 

    area= (base * height) / 2; // Multiply the base and height and divide by 2.
    printf("the area of triangle is: %d", area); //Print the total number of the area of triangle. 
    return 0;
}