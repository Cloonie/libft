int	ft_isalpha(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1024);
	else if (c >= 'a' && c <= 'z')
		return (1024);
	return (0);
}

/*
#include <stdio.h>
#include <ctype.h>

int main()
{
	printf("%d\n", ft_isalpha('A'));
	printf("%d\n", ft_isalpha('a'));
	printf("%d\n", ft_isalpha('+'));
	printf("%d\n", isalpha('A'));
	printf("%d\n", isalpha('a'));
	printf("%d\n", isalpha('+'));
}
*/