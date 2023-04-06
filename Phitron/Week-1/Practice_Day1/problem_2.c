#include <stdio.h>
int main()
{
    double num1, num2, sum, mns, mlt, div;

    scanf("%lf %lf", &num1, &num2);

    sum = num1 + num2;
    mns = num1 - num2;
    mlt = num1 * num2;
    div = num1 / num2;

    printf("%0.0lf + %0.0lf = %0.0lf \n", num1, num2, sum);
    printf("%0.0lf - %0.0lf = %0.0lf \n", num1, num2, mns);
    printf("%0.0lf * %0.0lf = %0.0lf \n", num1, num2, mlt);
    printf("%0.0lf / %0.0lf = %0.2lf \n", num1, num2, div);

    return 0;
}