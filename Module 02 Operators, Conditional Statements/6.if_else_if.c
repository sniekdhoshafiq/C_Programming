#include<stdio.h>

int main()
{
    int tk;
    scanf("%d", &tk);

    if (tk >= 100)
    {
        printf("I will eat burger. \n");
    }
    else if (tk >=50)
    {
        printf("I will eat fuchka. \n");
    }
    else if (tk >=20)
    {
        printf("I will eat ice cream. \n");
    }
    else
    {
        printf("Nothing to eat! \n");
    }

    return 0;
    
}