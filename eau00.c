#include <stdio.h>

void C3digit(void)
{
    int i;
    int j;
    int k;

    i = 0;
    while (i <= 7)
    {
        j = i + 1;
        while (j <= 8)
        {
            k = j + 1;
            while (k <= 9)
            {
                printf("%d%d%d\n", i, j, k);
                k++;
            }
            j++;
        }
        i++;
    }
}

int main(void)
{
    C3digit();
}