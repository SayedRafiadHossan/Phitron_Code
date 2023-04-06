#include <stdio.h>
int main()
{
    int i, n;
    scanf("%d", &n);

    for (i = 1; i <= 10; i += 1)
    {
        if (i == n)
        {
            continue;
        }

        printf("%d\n", i);
    }

    return 0;
}