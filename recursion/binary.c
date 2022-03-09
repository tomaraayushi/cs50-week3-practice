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

int binary_search_recursion(int arr[100], int left, int right, int e)
{
    if(left > right)
    {
        return -1;
    }
    int mid = left + ((left + right)/2);
    if(e == arr[mid])
    {
        return mid;
    }
    if(e < arr[mid])
    {
        return binary_search_recursion(arr,left,mid-1,e);
    }
    else
    {
        return binary_search_recursion(arr,mid+1,right,e);
    }
}


int main(void)
{
    int arr[100];
    int n = get_int("Size: ");
    get_array(arr, n);
    int e = get_int("Element: ");
    int index = binary_search_recursion(arr,0,n-1,e);
    if(index == -1)
    {
        printf("Not found\n");
    }
    else
    {
        printf("Found\n");
    }
}