#include <stdio.h>
int fabionacci(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    int x = fabionacci(n - 1) + fabionacci(n - 2);
    return x;
}
int main()
{
    for (int i = 5; i >= 0; i--)
    {
        printf("%d ", fabionacci(i));
    }
    return 0;
}