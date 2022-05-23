/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliew < mliew@student.42kl.edu.my>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 11:11:37 by mliew             #+#    #+#             */
/*   Updated: 2022/05/23 12:11:06 by mliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	int i;
	const char *dest;
	const char *sour;

	i = 0;
	dest = (const char *)dst;
	sour = (const char *)src;
	while (i < len)
	{
		dest[i] = sour[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}