// https://www.hackerrank.com/contests/assignment-01-a-introduction-to-c-programming-a-batch-05/challenges/shopping-13

#include<stdio.h>

int main()
{
    long long int initialBalance;
    scanf("%lld", &initialBalance);

    if(initialBalance > 1000)
    {
        printf("I will buy Punjabi \n");

        long long int newBalance = initialBalance - 1000;

        if(newBalance >= 500)
        {
            printf("I will buy new shoes \n");
            printf("Alisa will buy new shoes \n");
        }
    }
    else
    {
        printf("Bad luck!");
    }

    return 0;
}