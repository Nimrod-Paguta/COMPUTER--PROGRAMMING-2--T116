//Nimrod E. Paguta
//BSIT 1-A
//PROGRAMMING 2
//Activity 3.0 - C Arrays
#include <stdio.h>
int main()
{
    int elements[10], i, n = 10, sum = 0;
    printf("Enter the size of the Array: 10\n");
    for(i=0; i<n; ++i)

    {
        printf("Enter Element %d:", i+1);
        scanf("%d", &elements[i]);

        sum += elements[i];
    }
    printf("Sum of all array elements = %d", sum);
    return 0;
}
