#include<stdio.h>

int main()
{
    int i = 1;      // initialization

    do
    {
        printf("%d -> i am fine. \n", i);
        i++;        // increment/decrement
    }
    while(i <= 5);  // condition

    return 0;
}