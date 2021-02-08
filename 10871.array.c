#include <stdio.h>

int main(void)
{
    int arr[10] = {0};
    int remain[42] = {0};
    int n; 
    int count = 0;
    for (int i=0; i<10; i++)
    {
        scanf("%i", &arr[i]);
        n = arr[i] % 42;
        remain[n]++;
    }
    for (int i=0; i<42; i++)
    {
        if (remain[i] != 0)
        {
            count++;
        }
    }
    printf("%i", count);
}
