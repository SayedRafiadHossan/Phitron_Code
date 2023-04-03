#include <stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);

    if (tk >= 100)
    {
        printf("Burger khabo.");
    }
    else if (tk >= 50)
    {
        printf("Fucka khabo.");
    }
    else if (tk >= 30)
    {
        printf("kichu akta khea nibo.");
    }
    else
    {
        printf("Na khea thkbo.");
    }
}