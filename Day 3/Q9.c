#include <stdio.h>

int main() {
    int n, i;

    printf("Enter a number: ");
    if (scanf("%d", &n) != 1) {
        return 0;
    }

    if (n <= 1) {
        printf("Not Prime\n");
        return 0;
    }

    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            printf("Not Prime\n");
            return 0;
        }
    }

    printf("Prime\n");
    return 0;
}