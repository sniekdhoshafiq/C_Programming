#include<stdio.h>

int main()
{
    for(int i=1; i<=10; i++)
    {
        if(i==7) continue;
        printf("%d -> i am fine. \n", i);
    }

    return 0;
}