#include <stdio.h>
#include <string.h>

char OX[80];

int main(void)
{
    int n, sum, add;
    scanf("%i", &n);
    
    int i=0;
    while(i<n)
    {
        scanf("%s", OX);
        sum=0;
        add=1;
        int j=0;
        while(j<strlen(OX))
        {
            if(OX[j]=='O')
            {
                sum += add;
                add++;
            }
            else
            {
                add = 1;
            }
            j++;
        }
        printf("%i\n", sum);
        i++;
    }
}
