#include <stdio.h>
//PAGUTA
//OCIER
//A program that takes in 5 numbers from the user and calculates the average.
int main(void) {

int sum=0,i,n;

printf("Enter the five no.'s one by one\n");; //input five numbers. 

for(i=1;i<=5;i++){ //i is for 1, 1 is less than or equal to five, i is printed and then incremented.

scanf("%d",&n); // scan the input number.

sum=sum+n; //sum all the input numbers.

}

printf("The sum is =%d\nThe average is =%d ",sum,(sum/5)); 
//compute the total sum and devide by 5.
//Print the result. 
//print the average. 

return 0;

}