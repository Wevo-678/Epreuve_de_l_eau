#include <stdio.h>
void C2nbr(void)
{
    int i;
    int j;

    i = 0;
    while (i < 100)
    {
        j = i + 1;
        while (j < 100)
        {
            printf("%d %d, ", i, j);
            j++;
        }
        i++;
    }
}

int main(void)
{
    C2nbr();
}