#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dest;
	unsigned char	*sour;
	int			i;

	i = 0;
	if ((dst == src) || n == 0)
		return (dst);
	if (!dst && !src)
		return (0);
	dest = (unsigned char *)dst;
	sour = (unsigned char *)src;
	while (i < n)
	{
		dest[i] = sour[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main()
{
	char string[1024] = "";

	ft_memcpy(string, "abcdeasdfghj", 55);
	printf("%s\n", string);
}
*/