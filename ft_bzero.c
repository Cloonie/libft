#include <stdio.h>
#include <strings.h>

void ft_bzero(void *s, size_t n)
{
	unsigned char	*tmp;
	size_t			i;

	i = 0;
	tmp = (unsigned char *)s;
	while (i < n)
		tmp[i++] = '0';
	s = tmp;
}
/*
int	main () 
{
	char str[] = "This is string.h library function";
	printf("%s\n", str);
	ft_bzero(str, 4);
	printf("%s\n", str);
	ft_bzero(str, 16);
	printf("%s\n", str);
}
*/