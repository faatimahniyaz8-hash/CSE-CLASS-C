#include <stdio.h>
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int prev1 = 1;
    int prev2 = 0;
    int curr = prev1 + prev2;
    printf("%d ", prev2);
    printf("%d ", prev1);
    for (int i = 3; i <= n; i++)
    {
        int curr = prev1 + prev2;
        prev2 = prev1;
        prev1 = curr;
        printf("%d ", curr);
    }

    return 0;
}