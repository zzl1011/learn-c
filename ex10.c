#include <stdio.h>

int power(int m, int n);
int main() 
{
    int i;

    for (i = 1; i < 10; i++) 
    {
        printf("%d %d %d\n", i, power(2, i), power(-i, 3));
    }
    return 0;
}

int power(int base, int n) 
{
    int i, p;

    p = 1;
    for (i=1; i <= n; ++i) {
        p = p*base;
    }
    return p;
}
