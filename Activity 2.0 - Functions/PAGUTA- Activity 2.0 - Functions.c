//Nimrod E. Paguta
//BSIT- 1A
//PROGRAMMING 2
//Create a C program that calculates the average of students' grades(five subjects)
# include <stdio.h>
int addnumber(int a, int b, int c, int d, int e); 
int number ; 
int main()
{
  int num, num2, num3, num4, num5, sum = 0; 
  float avg; 

  printf("Enters five numbers:\n"); 
  scanf("%d %d %d %d %d", &num, &num2, &num3, &num4, &num5); 

  sum = addnumber(num, num2, num3, num4, num5); 



    number = 5; 
    avg = sum / number ; 
      printf("average = %0.2f", avg); 
    
  return 0; 

}
  int addnumber(int a, int b, int c, int d, int e) 
{
  int result; 
  result = a+b+c+d+e; 
  return result; 
}

