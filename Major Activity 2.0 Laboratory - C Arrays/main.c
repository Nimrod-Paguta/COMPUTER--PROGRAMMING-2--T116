//Nimrod E. Paguta
//BSIT- 1A
//Programming 2 T116
#include <stdio.h>
int main()
{
    int number;
    int id;
    int min;
    int son[3][2];

    son[0][0] = 111;
    son[1][1] = 222;

    son[2][2] = 333;
    son[2][1] = 444;

    son[3][3] = 555;
    son[4][4] = 777;

    printf("Enter ID number: ");
    scanf("%d", &id);
    printf("Enter PIN: ");
    scanf("%d", &min);


    if (id == son[0][0], min ==son[1][1]){
        printf("You have succesfully logged in ID#: %d",son[0][0], son[1][1]);
    } else if (id ==son [2][2], min == son[2][1]){
    printf("You have succesfully logged in ID#: %d", son[2][2], son[3][3]);
           }else if (id == son [3][3],min == son [4][4]){
             printf("You have succesfully logged in ID#: %d", son[3][3], son[4][4]);
        }else

    printf("Invalid IP/ID!");
    return 0;
}

























