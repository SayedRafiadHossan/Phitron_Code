#include <stdio.h>
int main()
{
    int a = 10, b = 33;
    int add = a + b, mns = b - a, mlt = a * b, div = b / a, mod = b % a;

    printf("%d %d %d %d %d", add, mns, mlt, div, mod);

    return 0;
}