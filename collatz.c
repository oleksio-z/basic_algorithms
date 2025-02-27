#include <cs50.h>
#include <stdio.h>

int collatz(int n);

int main(void)
{
    int n = get_int("Number: ");

    int steps = collatz(n);

    printf("Steps: %i\n", steps);

    return 0;
}

int collatz(n)
{
    if (n == 1)
    {
        return 0;
    }

    if ((n % 2) == 0)
    {
        return 1 + collatz(n / 2);
    }
    else
    {
        return 1 + collatz(3*n+1);
    }
    return 1;
}
