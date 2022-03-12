#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

void get_array(int arr[100], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%ith value: ", i);
        arr[i] = get_int(" ");
    }
}

void merge_two_arrays(int arr[100], int left, int mid, int right)
{
     int i = left;
     int j = mid+1;
     int k = left;
     int temp[100];
     while(i <= mid && j <= right)
     {
         if(arr[i] <= arr[j])
         {
             temp[k] = arr[i];
             i++;
         }
         else
         {
             temp[k] = arr[j];
             j++;
         }
         k++;
     }
     if(i > mid)
     {
         while( j <= right)
         {
             temp[k] = arr[j];
             j++;
             k++;
         }
     }
     else
     {
         while(i <= mid)
         {
             temp[k] = arr[i];
             i++;
             k++;
         }
     }
     for(k = left; k <= right; k++)
     {
         arr[k] = temp[k];
     }
}

void merge_sort(int arr[100], int left, int right)
{
    if(left < right)
    {
        int mid = (left+right)/2;
        merge_sort(arr,0,mid);
        merge_sort(arr,mid+1,right);
        merge_two_arrays(arr,left,mid,right);
    }
}

int main(void)
{
    int arr[100];
    int n = get_int("Size: ");
    get_array(arr, n);
    merge_sort(arr,0,n-1);
    printf("Sorted array:");
    for(int i =0; i < n; i++)
    {
        printf("%i ",arr[i]);
    }
    printf("\n");
}