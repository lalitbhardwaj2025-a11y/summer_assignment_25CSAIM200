#include<stdio.h>
int main()
{
    int a, b, product ;
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);
    product = a * b;
    printf("Product = %d\n", product);
    return 0;
}