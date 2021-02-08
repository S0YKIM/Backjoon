#include <stdio.h>

int main(void)
{
    int A, B, C, result, n;
    int a[9] = {0, };
    scanf("%i %i %i", &A, &B, &C);
    result = A * B * C;
    
    while (result > 0)
    {
        n = result % 10;
        a[n]++;
        result /= 10;
    }
    
    for(int i=0; i<10; i++)
    {
        printf("%i\n", a[i]);
    }
}
