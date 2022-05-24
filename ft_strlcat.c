/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliew < mliew@student.42kl.edu.my>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 15:15:56 by mliew             #+#    #+#             */
/*   Updated: 2022/05/24 18:07:44 by mliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (dstsize == 0)
	{
		while (dst[i])
			i++;
		while (src[j])
			j++;
		return (i + j);
	}
	while (dst[i])
		i++;
	while (i < dstsize - 1 && src[j])
	{
		dst[i++] = src[j++];
	}
	dst[i] = '\0';
	return (j);
}
