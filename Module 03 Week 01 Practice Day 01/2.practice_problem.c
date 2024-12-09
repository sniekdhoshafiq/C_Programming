// https://docs.google.com/document/d/19-yrrckK55JFnhlsc8OWG1LouTJ-DUkW2RUsKWIOT0c/edit?tab=t.0

#include<stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int summation = a + b;
    printf("%d + %d = %d \n", a, b, summation);

    int subtraction = a - b;
    printf("%d - %d = %d \n", a, b, subtraction);

    int multiplication = a * b;
    printf("%d * %d = %d \n", a, b, multiplication);

    float division = a*1.0 / b;
    printf("%d / %d = %.2f \n", a, b, division);

    return 0;
    
}