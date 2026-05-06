#include <stdio.h>
#include <string.h>
int checkpalindrome(char arr[], int st, int end)
{
    if (st > end)
    {
        return 1;
    }

    if (arr[st] != arr[end])
    {
        return 0;
    }
    return checkpalindrome(arr, st + 1, end - 1);
}

int main()
{
    char arr[100];

    printf("Enter a string: ");
    scanf("%s", arr);

    int st = 0;
    int end = strlen(arr) - 1;
    if (checkpalindrome(arr, st, end))
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not a palindrome\n");
    }

    return 0;
}