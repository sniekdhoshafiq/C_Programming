#include<stdio.h>

int main()
{
    int lessThan = (10 < 3);
    printf("False %d \n", lessThan);         // 0 (False)

    int lessThanEqual = (10 <= 3);
    printf("False %d \n", lessThanEqual);    // 0 (False)

    int greaterThan = (10 > 3);
    printf("True %d \n", greaterThan);       // 1 (True)

    int greaterThanEqual = (10 >= 3);
    printf("True %d \n", greaterThanEqual);  // 1 (True)

    int equal = (5 == 5);
    printf("True %d \n", equal);             // 1 (True)

    int notEqual = (5 != 5);
    printf("False %d \n", notEqual);         // 0 (False)

    return 0;
}