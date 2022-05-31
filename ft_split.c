/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliew < mliew@student.42kl.edu.my>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 10:43:33 by mliew             #+#    #+#             */
/*   Updated: 2022/05/31 18:28:21 by mliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	not_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (0);
		i++;
	}
	return (1);
}

int	countstr(char *str, char c)
{
	char	*s;
	int		strcount;

	strcount = 0;
	s = str;
	while (*s)
	{
		if (not_sep(*s, c))
		{
			++strcount;
			while (*s && not_sep(*s, c))
				++s;
		}
		else
			++s;
	}
	return (strcount);
}

int	countchar(char *str, char c)
{
	int	charcount;

	charcount = 0;
	while (*str && not_sep(*str++, c))
		++charcount;
	return (charcount);
}

char	**emptystr(char *str, char **res)
{
	int	i;
	int	j;

	i = 0;
	if (!res)
		return (NULL);
	res[0] = 0;
	if (*str == '\0')
		return (res);
	while (*(str + i))
		i++;
	j = 0;
	res[0] = malloc(sizeof(char) * i + 1);
	while (*str)
		res[0][j++] = *str++;
	res[0][j] = '\0';
	res[1] = 0;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		j;

	i = 0;
	res = malloc(sizeof(char *) * (countstr(s, c) + 1));
	if (!res || *s == '\0' || c == '\0')
		return (emptystr(s, res));
	while (*s)
	{
		j = 0;
		if (not_sep(*s, c))
		{
			res[i] = malloc(sizeof(char) * countchar(s, c) + 1);
			while (*s && not_sep(*s, c))
				res[i][j++] = *s++;
			res[i++][j] = '\0';
		}
		else
			++s;
	}
	res[i] = 0;
	return (res);
}
