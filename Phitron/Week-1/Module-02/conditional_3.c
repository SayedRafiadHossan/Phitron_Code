#include <stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);

    if (tk >= 5000)
    {
        printf("Cox's Bazar jbo.\n");

        if (tk >= 10000)
        {
            printf("Saint martin jbo.\n");
        }
        else
        {
            printf("Ferot chole asbo.\n");
        }
    }
    else
    {
        printf("kthao jbo na.\n");
    }
}