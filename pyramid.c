#include <stdio.h>

int main()
{
    int n = 5;

    for (int i = 0; i < n; i++)
    {

        // 1. spaces
        for (int j = n - i - 1; j >= 0; j--)
        {
            printf(" ");
        }

        // left stars
        for (int j = 0; j < i - 1; j++)
        {
            printf("*");
        }

        //  right stars
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }

        // 4. new line
        printf("\n");
    }

    return 0;
}