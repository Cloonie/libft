/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliew < mliew@student.42kl.edu.my>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 11:11:43 by mliew             #+#    #+#             */
/*   Updated: 2022/05/23 11:50:09 by mliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*tmp;

	i = 0;
	tmp = (unsigned char *)b;
	while (i < len)
		tmp[i++] = c;
	return (b = tmp);
}
/*
int	main () 
{
	char str[] = "This is string.h library function";
	puts(str);
	ft_memset(str,'X',4);
	puts(str);
	ft_memset(str,'$',8);
	printf("%s\n", str);
}
*/