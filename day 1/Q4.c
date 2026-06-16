#include <stdio.h>
int main()
{
    int n, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    printf("Number of divisors of %d is %d\n", n, count);
    return 0;
}