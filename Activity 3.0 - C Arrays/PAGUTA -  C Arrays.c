//Nimrod E. Paguta
//BSIT 1A
//PROGRAMMING 2- T116
//Create a Program that adds all the array elements and prints the sum

// + Array size limit is 5 to 10 only.
// + The user must input the array size
// + The user must input the elements.
#include <stdio.h>
int main()
{
    int elements[10], i, n , sum = 0;
    printf("\nEnter the size of the array, 5 to 10 only: ");
    scanf("%d",&n);
    if(n>10){
        printf("\nINVALID, PLEASE TRY AGAIN. \n");
        return 0;
    }else if(n<5){
        printf("\nINVALID, PLEASE TRY AGAIN. \n");
        return 0;
    }else

    for(i=0; i<n; ++i)

    {
        printf("Enter Element %d: ", i+1);
        scanf("%d", &elements[i]);

        sum += elements[i];
    }
    printf("\nSum of all array elements = %d\n", sum);
    return 0;
}