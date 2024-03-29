#include <cs50.h>
#include <stdio.h>
#include <string.h>

int palindrome_string(char s[], int first, int last)
{
    if(first >= last)
    {
        return 0;
    }

    if(s[first] == s[last])
    {
        return palindrome_string(s,first+1, last-1);
    }
    else
    {
        return 1;
    }
}
int main(void)
{
    string word = get_string("Word: ");
    int l = strlen(word);
    if(palindrome_string(word,0,l-1) == 0)
    {
        printf("This is a palindrome\n");
    }
    else
    {
        printf("This is not a palindrome\n");
    }
}