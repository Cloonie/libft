/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliew <mliew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 10:43:33 by mliew             #+#    #+#             */
/*   Updated: 2022/06/01 22:01:20 by mliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Count the number of strings separated by separators.
Return the strings' count.*/
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

/*Count number of characters of string seperated by separatr.
Return the characters' count.*/
static int	countchar(char const *s, char c)
{
	int	countchar;

	countchar = 0;
	while (*s && *s++ != c)
		++countchar;
	return (countchar);
}


/*Allocate (with Ma)
Return i which is the last pointer in 'res' array for NULL terminating.*/
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

/*
**	Allocates (with malloc(3)) and returns an array of strings obtained by
**	splitting 's' using the character 'c' as a delimiter. The array must end
**	with a NULL pointer
**	
**	The ft_split() returns the array of new strings resulting from the split.
**	Returns NULL if the allocation fails.
*/
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
