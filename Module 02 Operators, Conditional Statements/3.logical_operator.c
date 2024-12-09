#include<stdio.h>

int main()
{
    int logical_AND = ((10 > 5) && (10 < 20));
    printf("%d \n", logical_AND);                // 1 (True)

    int logical_OR = ((10 > 5) || (10 < 7));
    printf("%d \n", logical_OR);                 // 1 (True)

    int logical_NOT = !(10 > 5);
    printf("%d \n", logical_NOT);                // 0 (False)

    return 0;
}