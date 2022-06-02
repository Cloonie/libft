/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliew <mliew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 10:43:33 by mliew             #+#    #+#             */
/*   Updated: 2022/06/02 19:27:18 by mliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countstr(char const *s, char c)
{
	int		count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			++count;
			while (*s != c && *s)
				++s;
		}
		else
			++s;
	}
	return (count);
}

static int	countchar(char const *s, char c)
{
	int	countchar;

	countchar = 0;
	while (*s && *s++ != c)
		++countchar;
	return (countchar);
}

static unsigned int	putstr(char const *s, char c, char **res)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (*s)
	{
		j = 0;
		if (*s != c)
		{
			res[i] = malloc(sizeof(char) * countchar(s, c) + 1);
			while (*s != c && *s)
				res[i][j++] = *s++;
			res[i++][j] = '\0';
		}
		else
			++s;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**res;

	if (s == NULL)
		return (NULL);
	res = malloc(sizeof(char *) * (countstr(s, c) + 1));
	if (!res || *s == '\0' || c == '\0')
		return (NULL);
	res[0] = 0;
	res[putstr(s, c, res)] = 0;
	return (res);
}
