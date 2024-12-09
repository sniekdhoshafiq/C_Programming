// https://www.hackerrank.com/contests/assignment-01-a-introduction-to-c-programming-a-batch-05/challenges/multiply-16-2

#include<stdio.h>

int main()
{
    long long int a , b;
    scanf("%lld %lld", &a, &b);

    long long int multiply = a * b;
    printf("%lld \n", multiply);

    return 0;
}