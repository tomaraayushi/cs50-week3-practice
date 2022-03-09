#include <cs50.h>
#include <stdio.h>
#include <string.h>

void get_array(string arr[100], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%ith name: ", i);
        arr[i] = get_string(" ");
    }
}

void string_selection_sort(string arr[100], int size)
{
    for(int i = 0; i < size-1; i++)
    {
        int min = i;
        for(int j = i+1; j < size; j++)
        {
            if(strcmp(arr[j],arr[min]) < 0)
            {
                min = j;
            }
        }
        string temp = arr[i];
        if(min != i)
        {
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}

void print_array(string arr[100], int size)
{
    printf("Sorted Array: ");
    for(int i = 0; i < size; i++)
    {
        printf("%s ", arr[i]);
    }
    printf("\n");
}

int main(void)
{
    string arr[100];
    int n = get_int("Size: ");
    get_array(arr, n);
    string_selection_sort(arr, n);
    print_array(arr, n);
}