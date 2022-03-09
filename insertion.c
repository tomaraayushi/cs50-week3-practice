#include <cs50.h>
#include <stdio.h>

void get_array(int arr[100], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%ith value: ", i);
        arr[i] = get_int(" ");
    }
}

void insertion_sort(int arr[100], int size)
{
    for(int i = 1; i < size; i++)
    {
        int temp = arr[i];
        int j = i-1;
        for( j = i-1; j >= 0 && arr[j] > temp; j--)
        {
            arr[j+1] = arr[j];
        }
        arr[j+1] = temp;
    }
}

void print_arr(int arr[100], int size)
{
    printf("Sorted array: ");
    for(int i = 0; i < size; i++)
    {
        printf("%i ", arr[i]);
    }
    printf("\n");
}

int main(void)
{
    int arr[100];
    int n = get_int("Size: ");
    get_array(arr, n);
    insertion_sort(arr, n);
    print_arr(arr, n);
}