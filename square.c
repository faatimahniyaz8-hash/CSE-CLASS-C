#include <stdio.h>

int main()
{
    long long int n;
    printf("Enter n: ");
    scanf("%lld", &n);

    for (int i = 0; i < 5; i++)
    {
        long long int k = n * n;
        printf("%lld\n", k);
        n = k;
    }

    return 0;
}