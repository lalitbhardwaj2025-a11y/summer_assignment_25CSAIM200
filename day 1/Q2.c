#include <stdio.h>
int main() 
{
    int number, n, table;
    printf("Enter a number: ");
    scanf("%d", &number);
   for (n = 1; n <= 10; n++) 
   {
        table = number * n;
        printf("table is %d\n", table);
    }
    return 0; 
}