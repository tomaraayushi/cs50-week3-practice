#include <cs50.h>
#include <stdio.h>

int fibonacci_series(long n)
{
    if(n == 0 || n == 1)
    return n;
    else
    return (fibonacci_series(n-1) + fibonacci_series(n-2));
}
int main(void)
{
    long num = get_long("N: ");
    long x = fibonacci_series(num);
    printf("Fibonacci series is: \n");
    for(int i = 0; i < num; i++)
    {
        printf("%i ", fibonacci_series(i));
    }
}