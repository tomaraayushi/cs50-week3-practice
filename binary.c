#include <cs50.h>
#include <stdio.h>

void get_arr_values(int arr[200], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%ith value: ", i);
        arr[i] = get_int(" ");
    }
}
int binary_search(int arr[200], int n, int e)
{
    int first = 0;
    int last = n-1;
    for(int i = 0; i < n; i++)
    {
        int mid = (first + last)/2;
        if(arr[mid] == e)
        {
            return mid;
        }
        if(arr[mid] > e)
        {
            last = mid -1;
        }
        else
        {
            first = mid +1;
        }
    }
        return -1;
}

int main(void)
{
    int arr[200];
    int n = get_int("Size: ");
    get_arr_values(arr, n);
    int e = get_int("Element: ");
    int index = binary_search(arr, n, e);
    if(index == -1)
    {
        printf("not found\n");
    }
    else
    {
        printf("found\n");
    }
}