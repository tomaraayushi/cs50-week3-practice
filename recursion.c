#include <cs50.h>
#include <stdio.h>

int recursion_sum(int x)
{
    int s = 0;
    if(x == 1)
    {
        return x;
    }
    else
    {
        s = x + recursion_sum(x-1);
        return s;
    }
}

int main(void)
{
    int n = get_int("N: ");
    int a = recursion_sum(n);
    printf("%i\n", a);

}