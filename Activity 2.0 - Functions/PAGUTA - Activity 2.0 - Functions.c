//Nimrod E. Paguta
//BSIT - 1A
//PROGRAMMING 2 T116
////Create a C program that calculates the average of students' grades(five subjects)
#include <stdio.h>

int Addnumber(int, int, int, int, int); 
float Avgnumber(int, int, int, int, int); 

int main()
{
    int num1, num2, num3, num4, num5;
    int sum;
    float avg;

    printf("Enter the 5 numbers: \n");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

    sum = Addnumber(num1, num2, num3, num4, num5);
    avg = Avgnumber(num1, num2, num3, num4, num5);

    printf("\nAverage: %f\n", avg);

    return 0;
}

int Addnumber(int a, int b, int c, int d, int e)
{
    int sum;
    sum = a + b + c + d + e;
    return sum;
}


float Avgnumber(int a, int b, int c, int d, int e)
{
    float average;
    return ((float)(a) + (float)(b) + (float)(c) + (float)(d) + (float)(e)) / 5;
}