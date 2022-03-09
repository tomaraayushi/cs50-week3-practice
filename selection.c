#include <cs50.h>
#include <stdio.h>

void get_array(int arr[200], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%ith value: ", i);
        arr[i] = get_int(" ");
    }
}

void selection_sort(int arr[200], int n)
{
    for(int i = 0; i < n-1; i++)
    {
        int min = i;
        for(int j = i+1; j < n; j++)
        {
            if(arr[j] < arr[min])
            {
                min = j;
            }
        }
        int temp = arr[i];
        if(min != i)
        {
           arr[i] = arr[min];
           arr[min] = temp;
        }
    }
}

void print_array(int arr[200], int n)
{
    printf("Sorted array: ");
    for(int i =0; i < n; i++)
    {
        printf("%i ", arr[i]);
    }
    printf("\n");
}

int main(void)
{
    int arr[200];
    int n = get_int("Size: ");
    get_array(arr, n);
    selection_sort(arr, n);
    print_array(arr, n);
}