//Nimrod E. Paguta
//BSIT- 1A
//Min and Max
#include <stdio.h>
int  main()
{
int n;
printf("How many numbers do you want to enter?\n");
scanf("%d", &n);

 int max = 0, min, num1;
 printf("Input number:\n");
 min = num1;

 for (int i = 1; i<=n; i++)
{
 scanf("%d",&num1);

    while(num1<0)
{
    printf("This is invalid input. Try again. \n ");
    scanf("%d", &num1);
}
    if (num1 > max)
    { max = num1;}
    if (num1<min)
    { min = num1;}
}
    printf("max: %d \nmin: %d", max, min);

 return 0;
}

