#include <cs50.h>
#include <stdio.h>

int lcm(int x, int y)
{
    static int m = 1;
    if(m % x == 0 && m % y == 0)
    {
        return m;
    }
    else
    {
        m++;
        lcm(x, y);
        return m;
    }
}

int main(void)
{
    int n1 = get_int("Num1: ");
    int n2 = get_int("Num2: ");
    int L = lcm(n1, n2);
    printf("Lcm of %i and %i is %i\n", n1, n2, L);
}