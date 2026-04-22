#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("enter no n: ");
    scanf("%d", &n);

    int sum = 0;
    int original = n;

    int count = 0;
    int temp = n;
    while (temp > 0)
    {
        temp = temp / 10;
        count++;
    }

    while (n > 0)
    {
        int lastdigit = n % 10;
        n = n / 10;
        sum += pow(lastdigit, count);
    }

    if (sum == original)
    {
        printf("armstrong no found");
    }
    else
    {
        printf("armstrong no not found");
    }

    return 0;
}