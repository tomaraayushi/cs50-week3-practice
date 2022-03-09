#include <cs50.h>
#include <stdio.h>
#include <string.h>

void get_array_names(string names[100], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%ith name: ", i);
        names[i] = get_string(" ");
    }
}

int linear_search_names(string names[100], int n, string s)
{
    for(int i = 0; i < n; i++)
    {
        if(strcmp(names[i], s) == 0)
        {
            return i;
        }
    }
    return -1;
}

int main(void)
{
    string names[100];
    int n = get_int("size of array: ");
    get_array_names(names, n);
    string s = get_string("Name: ");
    int index = linear_search_names(names, n, s);
    if(index == -1)
    {
        printf("not found\n");
    }
    else
    {
        printf("found at %ith index\n", index);
    }
}
