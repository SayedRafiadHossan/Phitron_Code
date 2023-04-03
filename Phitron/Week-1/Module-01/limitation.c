#include <stdio.h>
int main()
{
    int a = 1000000000;
    double c = 2.222222222222;      // print 16 digit
    long long int b = 200000000000; // long int print 8 byte=64 bit

    printf("%lld %d\n", b, a);
    printf("%0.15lf", c);

    return 0;
}