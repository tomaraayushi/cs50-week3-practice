#include <cs50.h>
#include <stdio.h>

int prime_number(int n, int x)
{
    if(x == 1)
    {
        return 0;
    }
    else
    {
        if(n % x  != 0)
        {
            return prime_number(n, x-1);
        }
        else
        {
            return 1;
        }
    }
}

int main(void)
{
    int number = get_int("N: ");
    int x = number/2;
    int prime = prime_number(number, x);
    if(prime == 0)
    {
        printf("%i is a prime number\n", number);
    }
    else
    {
        printf("%i is not a prime number\n", number);
    }

}