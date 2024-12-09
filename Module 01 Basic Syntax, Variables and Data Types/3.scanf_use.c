#include<stdio.h>
int main()
{
    int rahim, karim;
    scanf("%d %d", &rahim, &karim);
    printf("%d %d \n", rahim, karim);


    int shafiq;
    char ch;
    float flt;
    scanf("%d %c %f", &shafiq, &ch, &flt);
    printf("%d %c %0.2f \n", shafiq, ch, flt);


    // Take percent(%) as input and show as output
    //first way
    int a , b;
    char p;
    scanf("%d%c %d%c", &a, &p, &b, &p);
    printf("%d%c %d%c \n", a, p, b, p);


    //second way
    int c , d;
    scanf("%d%% %d%%", &c, &d);
    printf("%d%% %d%% \n", c, d);

    return 0;
}
