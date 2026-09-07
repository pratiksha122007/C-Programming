#include <stdio.h>
#include <math.h>

int main()
{
    double principal;
    printf("Enter principal: ");
    scanf("%lf", &principal);

    double rate;
    printf("Enter rate: ");
    scanf("%lf", &rate);

    double time;
    printf("Enter time: ");
    scanf("%lf", &time);

    double amount = principal * pow((1 + rate / 100), time);
    double CI = amount - principal;

    printf("Compound Interest is: %.2lf", CI);

    return 0;
}