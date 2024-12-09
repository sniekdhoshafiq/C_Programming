// https://www.hackerrank.com/contests/assignment-01-a-introduction-to-c-programming-a-batch-05/challenges/divisible-2-1-1

#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for(int i=21; i<=n; i++)
    {
        if(i%3 == 0 && i%7 == 0) printf("%d \n", i);
    }

    return 0;
}