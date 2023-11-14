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

char *capitalize(char *s)
{
	int i = 0;
	while (s[i])
	{
		if (65 <= s[i] && s[i] <= 90)
			s[i] += 32;
		i++;
	}
	i = 0;
	while (s[i])
	{
		if ((i % 2 == 0 )&& ( 97 <= s[i] && s[i] <= 122))
			s[i] -= 32;
		i++;
	}
	return (s);
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		if (secure(av[1]) == 1)
			printf("%s", capitalize(av[1]));
		else 
			printf("Argument invalide");
	}
	else 
		printf("Argument invalide");
}