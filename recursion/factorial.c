#include <cs50.h>
#include <stdio.h>

int factorial(int number)
{
    if(number == 0)
    {
        return 1;
    }
    else
    {
        return number*factorial(number-1);
    }
}
int main(void)
{
    int n = get_int("N: ");
    int f = factorial(n);
    printf("Factorial of n: %i\n", f);

}