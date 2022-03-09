#include <cs50.h>
#include <stdio.h>

void get_array(int a[100], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%ith value: ", i);
        a[i] = get_int(" ");
    }
}

void insertiond_sort(int a[00], int n)
{
    for(int i = 1; i < n; i++)
    {
        int temp = a[i];
        int j = i-1;
        for(j = i-1; j >= 0 && a[j] < temp; j--)
        {
            a[j+1] = a[j];
        }
        a[j+1] = temp;
    }
}

void print_array(int a[100], int n)
{
    printf("Sorted array: ");
    for(int i = 0; i < n; i++)
    {
        printf("%i ", a[i]);
    }
    printf("\n");
}

int main(void)
{
    int arr[100];
    int n = get_int("size: ");
    get_array(arr, n);
    insertiond_sort(arr, n);
    print_array(arr, n);
}