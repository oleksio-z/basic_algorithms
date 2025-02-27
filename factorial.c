#include <cs50.h>
#include <stdio.h>

int fact(int n);

int main(void)
{
    int n = get_int("To fuct: ");

    int res = fact(n);

    printf("%i\n", res);

    return 0;
}

int fact(int n)
{
    if (n == 1)
    {
    return n;
    }

    int res = n * fact(n-1);

    return res;
}
