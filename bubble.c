#include <cs50.h>
#include <stdio.h>

void get_array_value(int arr[100], int n)
{
  for(int i = 0; i < n; i++)
  {
    printf("%ith element: ", i);
    arr[i] = get_int(" ");
  }
}

void bubble_sort(int arr[100], int n)
{
  int flag = 0;
  for(int i = 0; i < n-1; i++)
  {
    for(int j = 0; j < n-1-i; j++)
    {
      if(arr[j] > arr[j+1])
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

void print_array(int arr[100], int size)
{
  printf("Array values: ");
  for (int i = 0; i< size; i++)
  {
    printf("%i ", arr[i]);
  }
  printf("\n");
}


int main(void)
{
  int arr[100];
  int n = get_int("Size: ");
  get_array_value(arr, n);
  bubble_sort(arr, n);
  print_array(arr, n);
}