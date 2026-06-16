#include <stdio.h>
int main()
{
    int n, sum;
    printf("Enter a number: ");
    scanf("%d", &n);
    sum = n * (n + 1) / 2;
    printf("The sum of the first natural numbers is: %d\n", sum);
    return 0;
}