/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliew < mliew@student.42kl.edu.my>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 10:43:33 by mliew             #+#    #+#             */
/*   Updated: 2022/05/27 10:57:44 by mliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	counts(char *s, char c)
{
	int		scount;

	scount = 0;
	while (*s)
	{
		if (*s != c)
		{
			++scount;
			while (*s && *s != c)
				++s;
		}
		else
			++s;
	}
	return (scount);
}

int	countchar(char *s, char c)
{
	int	charcount;

	charcount = 0;
	while (*s && *s != c)
		++charcount;
	return (charcount);
}

char	**emptys(char *s, char **res)
{
	int	i;
	int	j;

	i = 0;
	if (!res)
		return (NULL);
	res[0] = 0;
	if (*s == '\0')
		return (res);
	while (*(s + i))
		i++;
	j = 0;
	res[0] = malloc(sizeof(char) * i + 1);
	while (*s)
		res[0][j++] = *s++;
	res[0][j] = '\0';
	res[1] = 0;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	char	*str;
	int		i;
	int		j;

	i = 0;
	str = s;
	res = malloc(sizeof(char *) * (counts(str, c) + 1));
	if (!res || *s == '\0' || c == '\0')
		return (emptys(str, res));
	while (*s)
	{
		j = 0;
		if (*s != c)
		{
			res[i] = malloc(sizeof(char) * countchar(str, c) + 1);
			while (*s && *s != c)
				res[i][j++] = *s++;
			res[i++][j] = '\0';
		}
		else
			++s;
	}
	res[i] = 0;
	return (res);
}

/*
int		main(void)
{
	int i = 0;
	char **tab;
		
	tab = ft_split("bonjour!je m'appel|Arthur,", ", |!");
	while (i < 5)
	{
		printf("sing %d : %s\n", i, tab[i]);
		i++;
	}
	return (0);
}
*/
/*
int main()
{
    char months[] = "JAN FEB MAR APR MAY JUN JUL,AUG,SEP,OCT,NOV,DEC";
    char** tokens;
    printf("months=[%s]\n\n", months);
    tokens = ft_split(months, ", |||");
    if (tokens)
    {
        int i;
        for (i = 0; *(tokens + i); i++)
        {
            printf("month=[%s]\n", *(tokens + i));
            free(*(tokens + i));
        }
        printf("\n");
        free(tokens);
    }
    return 0;
}
*/