// https://docs.google.com/document/d/19-yrrckK55JFnhlsc8OWG1LouTJ-DUkW2RUsKWIOT0c/edit?tab=t.0

#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    if(n>0)
    {
        printf("positive \n");
    }
    else if(n<0)
    {
        printf("negative \n");
    }
    else
    {
        printf("zero \n");
    }
    return 0;
}