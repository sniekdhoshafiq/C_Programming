#include<stdio.h>

int main()
{
    int tk;
    scanf("%d", &tk);

    if (tk >= 5000)
    {
        printf("Going Cox's Bazar. \n");

        if (tk >= 10000)
        {
            printf("Now Moving to Saint Martin. \n");
        }
        else
        {
            printf("Return Home. \n");
        }
    }
    else
    {
        printf("I am going no where! \n");
    }

    return 0;
}
