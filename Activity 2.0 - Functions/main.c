//Nimrod E. Paguta
//BSIT- 1A
//PROGRAMMING 2
//Create a C program that calculates the average of students' grades(five subjects)
# include <stdio.h>
int main()
{
  int num, num2, count, sum = 0; 
  float avg = 0.0; 

  printf("How many grades do you want to calculate?\n"); 
  scanf("%d", &num2); 

  printf("Enter your %d grades:\n", num2); 
  for(count = 1; count <= num2; count++)
    {
      scanf("%d", &num); 
        sum = sum + num; 
    }
  avg = sum / num2; 
  printf("sum = %d\nAverage = %0.2f\n", sum, avg); 
  return 0; 
}
