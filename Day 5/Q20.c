#include <stdio.h>

int main()
{
    int num, factor, i;
    int largestPrime = 0;

    printf("Enter the number: ");
    scanf("%d", &num);

    for (factor = 2; factor <= num; factor++)
    {
        if (num % factor == 0)   
        {
            for (i = 2; i < factor; i++)
            {
                if (factor % i == 0)
                {
                    break;   
                }
            }

            if (i == factor)  
            {
                largestPrime = factor;
            }
        }
    }

    printf("Largest Prime Factor = %d", largestPrime);

    return 0;
}