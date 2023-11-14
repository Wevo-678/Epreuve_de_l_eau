#include <stdio.h>

int is_digit(char *s)
{
	int i = 0;
	while(s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return(0);
		i++;
	}
	return (1);
}

int main(int ac, char **av)
{
	int b = 0;
	if (ac == 2)
	{
		b = is_digit(av[1]);
		if (b == 1)
			printf("TRUE");
		else
			printf("FALSE");
	}
	else	
		printf("Argument invalide");
}