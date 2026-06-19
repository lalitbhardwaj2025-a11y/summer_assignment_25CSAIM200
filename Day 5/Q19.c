#include <stdio.h>
int main()
{
    int num , factor ;
    printf("enter the number");
    scanf("%d",&num);
    for(factor=1 ; factor<=num ; factor++)
    {
        if(num%factor==0)
        {
            printf("%d\n",factor);
        }
    }
    return 0;
}