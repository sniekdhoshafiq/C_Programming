// https://docs.google.com/document/d/19-yrrckK55JFnhlsc8OWG1LouTJ-DUkW2RUsKWIOT0c/edit?tab=t.0

#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    if(n>=0)
    {
        if(n%2 == 0)
        {
            printf("Even \n");
        }
        else
        {
            printf("Odd \n");
        }
    }
    else
    {
        printf("Input positive values please! \n");
    }

    return 0;
}