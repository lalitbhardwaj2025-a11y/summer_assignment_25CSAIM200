#include <stdio.h>

int reverseNumber(int n, int rev)
{
    if(n == 0)
        return rev;

    rev = rev * 10 + (n % 10);

    return reverseNumber(n / 10, rev);
}

int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    printf("Reversed number = %d", reverseNumber(n, 0));

    return 0;
}