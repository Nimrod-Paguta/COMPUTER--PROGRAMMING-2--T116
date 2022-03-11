//Nimrod E. Paguta
//BSIT - 1A
//Finding the mean of N numbers 
#include <stdio.h>
int main()
{
int number, sum = 0;


do
{
printf("Enter a number: ");
scanf("%d", &number);
  
sum += number;
  

}
while(number != 0.0);
printf("The average is: %d", sum/5);

return 0;
}
