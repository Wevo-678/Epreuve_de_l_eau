#include <stdio.h>
#include <stdlib.h>

int is_prime(int n)
{
	if (n < 1)
        	return 0;
	if (n == 1)
		return 1;
	if (n == 2)
	        return 1;
	if (n % 2 == 0)
        	return 0;
	for (int i = 3; i * i <= n; i += 2)
	{
        	if (n % i == 0)
            	return 0;
    	}
    return 1;
}

int secure(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (('0' > s[i] && s[i] > '9'))
			return (0); 
		i++;
	}
	return (1);
}

int next_prime(int n)
{
	n +=1;
	while (is_prime(n) == 0)
	{
		n++;	
	}
	return (n);
}

int main (int ac, char **av)
{
	if (ac == 2)
	{
		if (secure(av[1]) == 0)
			printf("Argument invalide");
		printf("%d", next_prime(atoi(av[1])));
	}
	else
		printf("Argument invalide");
	
}

