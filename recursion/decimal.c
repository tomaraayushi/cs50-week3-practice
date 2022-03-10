#include <cs50.h>
#include <stdio.h>

int decimal_to_binary(int n)
{
    if(n == 0)
    {
        return 0;
    }
    else
    {
        return ((n%2)+ 10 * (decimal_to_binary(n/2)));
    }
}

int main(void)
{
    int num = get_int("N: ");
    int binary= decimal_to_binary(num);
    printf("Binary of %i is %i\n", num, binary);

}