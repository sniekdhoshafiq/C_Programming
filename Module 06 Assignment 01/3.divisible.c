// https://www.hackerrank.com/contests/assignment-01-a-introduction-to-c-programming-a-batch-05/challenges/divisible-4

#include<stdio.h>

int main()
{
    long long int n;
    scanf("%lld", &n);

    if(n%3 == 0) printf("YES \n");
    else printf("NO \n");

    return 0;
}