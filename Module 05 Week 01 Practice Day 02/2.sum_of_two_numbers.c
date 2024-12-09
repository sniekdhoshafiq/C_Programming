// https://www.hackerrank.com/contests/module-3-5-practice-a-introduction-to-c-programming-a/challenges/sum-of-two-numbers-89

#include<stdio.h>

int main()
{
    long long int a , b;
    scanf("%lld %lld", &a, &b);

    long long int summation = a + b;
    printf("%lld \n", summation);

    return 0;
}