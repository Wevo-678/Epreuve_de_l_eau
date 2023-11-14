#include <stdio.h>
int secure(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (('0' <= s[i] && s[i] <= '9'))
			return (0); 
		i++;
	}
	return (1);
}

int ft_strlen(char *s)
{
	int i = 0;
	while (s[i])
		i++;
	return (i);
}

int checker (char *long_s, char *short_s)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (long_s[i] && short_s[j])
	{
		if (long_s[i] == short_s[j])
			j++;
		i++;
	}
	if (j == ft_strlen(short_s))
		return (1);
	else
		return (0);
}

int main (int ac, char **av)
{
	int b = 0;

	if (ac == 3)
	{
		if (secure(av[1]) == 1 && secure(av[2]) == 1)
			b = checker(av[1], av[2]);
		else
			printf("Argument Invalide");
		if (b == 1)
			printf("TRUE");
		else
			printf("FALSE");
	}
	else
		printf("Argument invalide");
}