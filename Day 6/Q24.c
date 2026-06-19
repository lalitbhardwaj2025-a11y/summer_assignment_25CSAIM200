#include <stdio.h>

int main()
{
    int base, power, i;
    long long result = 1;

    printf("enter the base: ");
    scanf("%d", &base);

    printf("enter the power: ");
    scanf("%d", &power);

    for(i = 1; i <= power; i++)
    {
        result = result * base;
    }

    printf("Result = %lld", result);

    return 0;
}