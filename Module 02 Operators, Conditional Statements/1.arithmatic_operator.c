#include <stdio.h>

int main()
{
    int add = 10 + 3;
    printf("Addition : %d \n", add);        // 13

    int sub = 10 - 3;
    printf("Subtraction : %d \n", sub);     // 7

    int mul = 10 * 3;
    printf("Multiplication : %d \n", mul);  // 30

    int div = 10 / 3;
    printf("Division : %d \n", div);        // 3

    float dvd = 10*1.0 / 3;
    printf("Division : %.2f \n", dvd);      // 3.33

    int mod = 10 % 3;
    printf("Modulus : %d \n", mod);         // 1

    return 0;

}