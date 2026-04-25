#include <stdio.h>
int main()
{
    int arr[] = {1, 3, 4, 6, 8, 5};
    int n = 6;
    int temp;
    int start = 0, end = n - 1;
    while (start <= end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}