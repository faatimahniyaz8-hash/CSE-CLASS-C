#include <stdio.h>
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    float sum = 0;
    for (float i = 1.0; i <= n; i++)
    {
        sum = sum + 1 / i;
    }
    printf("%f", sum);
    return 0;
}