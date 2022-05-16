int	ft_atoi(char *str)
{
	int i;
	int isneg;
	int nbr;

	i = 0;
	isneg = 0;
	nbr = 0;
	while (str[i] != '\0' && str[i] <= 32)
		i++;
	if (str[i] == '-')
	{
		i++;
		isneg = 1;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
		nbr = (nbr * 10) + (str[i++] - '0');
	if (isneg == 1)
		return (-nbr);
	return (nbr );
}

/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf(":%d:\n", ft_atoi(" -123 45"));
    printf(":%d:\n", atoi(" -123 45"));
}
*/