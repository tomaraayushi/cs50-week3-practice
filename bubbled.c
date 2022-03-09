#include <cs50.h>
#include <stdio.h>

void get_arr_value(int arr[200], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%ith element: ", i);
        arr[i] = get_int(" ");
    }
}

void bubbled_sort(int arr[200], int size)
{
    int flag = 0;
    for(int i = 0; i < size-1; i++)
    {
        for(int j= 0; j < size-1-i; j++)
        {
            if(arr[j] < arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = 1;
            }
        }
        if(flag == 0)
        {
            return;
        }
    }
}

void print_arr(int arr[200], int size)
{
    printf("Array values: ");
    for(int i = 0; i < size; i++)
    {
        printf("%i ", arr[i]);
    }
    printf("\n");
}

int main(void)
{
    int arr[200];
    int n = get_int("Size: ");
    get_arr_value(arr, n);
    bubbled_sort(arr, n);
    print_arr(arr, n);
}