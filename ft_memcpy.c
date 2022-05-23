/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliew < mliew@student.42kl.edu.my>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 11:11:33 by mliew             #+#    #+#             */
/*   Updated: 2022/05/23 17:34:55 by mliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	char string[1024];
	int i=0;

	ft_memcpy(string, "12345\000abcde", 11);
	printf("%s\n", string);
	while (i < 11)
	{
		printf("%c", string[i++]);
	}
}
*/