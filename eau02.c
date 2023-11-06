#include <stdio.h>

int main (int ac, char **av)
{
    int i;

    i = ac;
    if (ac > 1)
    {
        while(i > 1)
        {
            printf("%s \n",av[i - 1]);
            i--;
        }
    }
    else
        printf("argument error !");
}