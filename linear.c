#include <cs50.h>
#include <stdio.h>

void get_array_values(int arr[100], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("enter %ith value: ", i);
        arr[i] = get_int(" ");
    }
}

int linear_search(int arr[100], int n, int e)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == e)
        {
            return i;
        }
    }
    return -1;
}
int main(void)
{
    int arr[100];
    int n = get_int("size: ");
    get_array_values(arr, n);
    int e = get_int("Element: ");
    int index = linear_search(arr, n, e);
    if(index == -1)
    {
        printf("not found\n");
    }
    else
    {
        printf("Found at index %i\n", index);
    }


}

