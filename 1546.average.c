#include <stdio.h>

int main(void)
{
    int N, M = 0;
    double score[1000] = {};
    double sum = 0, avg = 0;
    
    scanf("%i", &N);
    
    int i=0;
    while(i<N)
    {
        scanf("%lf", &score[i]);
        if (M < score[i])
        {
            M = score[i];
        }
        i++;
    }
    
    int j=0;
    while(j<N)
    {
        score[j] = score[j] / M * 100.00;
        sum += score[j];
        j++;
    }
    
    avg = sum / N;
    printf("%lf\n", avg);
}
