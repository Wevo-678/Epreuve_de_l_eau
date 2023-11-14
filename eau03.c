#include <stdio.h>
#include <stdlib.h>
int fibonnaci(int n)
{
	int result;
	int	a;
	int	b;
	int	i;

	result = 0;
	a = 0;
	b = 1;
	i = 2;
	if (n < 0)
		result = -1;
	else if (n == 0)
		result = 0;
	else if (n == 1)
		result = 1;
	else
	{
		while (i <= n)
		{
			result = a + b;
			a = b;
			b = result;
			i++;
		}
	}
	return (result);
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

int main(int ac, char **av) 
{
	if (ac == 2)
	{
		if (secure(av[1]) == 1)
			printf("%d\n",fibonnaci(atoi(av[1])));
		else
			printf("Erreur d'argument !");	
	}
	else
		printf("Erreur d'argument !");
}