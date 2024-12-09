// https://www.hackerrank.com/contests/module-3-5-practice-a-introduction-to-c-programming-a/challenges/variables-6-4

#include<stdio.h>

int main()
{
    int a;
    long long int b;
    float c;
    char d;

    scanf("%d \n", &a);
    scanf("%lld \n", &b);
    scanf("%f \n", &c);
    scanf("%c \n", &d);

    printf("%d \n", a);
    printf("%lld \n", b);
    printf("%0.2f \n", c);
    printf("%c \n", d);

    return 0;
}