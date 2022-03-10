#include <cs50.h>
#include <stdio.h>

int hcf(int x, int y)
{
    if(x == 0) return y;
    if(y == 0) return x;
    if(x > y)
    return hcf(x % y, y);
    else
    return hcf(x, y % x);
}

int main(void)
{
    int n1 = get_int("Num1: ");
    int n2 = get_int("Num2: ");
    int gcd = hcf(n1, n2);
    printf("Gcd of %i and %i is %i\n", n1, n2, gcd);
}