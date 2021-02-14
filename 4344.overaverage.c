#include <stdio.h>

int main(void)
{
    int C, N, sum, count;
    double avg, ratio;
    scanf("%i", &C);
    
    int i=0;
    while (i<C)
    {
        sum = 0;
        avg = 0.0;
        scanf("%i", &N);
        int score[N];
        int j=0;
        while (j<N)
        {
            scanf("%i", &score[j]);
            sum += score[j]; 
            j++;
        }
        avg = (float) sum / N;
        
        int k=0;
        count=0;
        while (k<N)
        {
            if (score[k] > avg)
            {
                count++;
            }
            k++;
        }
        ratio = (float)count/N*100;
        printf("%.3f%%\n", ratio);
        i++;
    }
}
