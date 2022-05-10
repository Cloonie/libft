int ft_isalnum(int n)
{
	if (n >= 'A' && n <= 'Z')
		return (8);
	else if (n >= 'a' && n <= 'z')
		return (8);
	else if (n >= '0' && n <= '9')
		return (8);
	return (0);
}

/*
#include <stdio.h>
#include <ctype.h>

int main()
{
	int test;

	test = 'A';
	printf("%d\n", ft_isalnum(test));
	printf("%d\n", isalnum(test));
}
*/