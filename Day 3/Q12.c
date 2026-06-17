#include <stdio.h>

int main()
{
    int a, b, lcm;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    lcm = a;

    while (lcm % b != 0)
    {
        lcm = lcm + a;
    }

    printf("LCM = %d", lcm);

    return 0;
}