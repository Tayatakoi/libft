/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samamaev <samamaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 22:44:28 by samamaev          #+#    #+#             */
/*   Updated: 2025/08/04 19:02:30 by samamaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_substrings(char const *s, char c)
{
	int	kol;

	kol = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s && *s != c)
		{
			kol++;
			while (*s && *s != c)
				s++;
		}
	}
	return (kol);
}

static int	len_of_substring(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static void	chistka(char **result)
{
	int	i;

	i = 0;
	while (result[i])
	{
		free(result[i]);
		i++;
	}
	free(result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		slova;
	int		i;

	slova = count_substrings(s, c);
	result = malloc(sizeof(char *) * (slova + 1));
	i = 0;
	if (!result)
		return (0);
	while (*s && i < slova)
	{
		while (*s == c)
			s++;
		result[i] = ft_substr(s, 0, len_of_substring(s, c));
		if (!result[i])
		{
			chistka(result);
			return (NULL);
		}
		s += len_of_substring(s, c);
		i++;
	}
	result[i] = NULL;
	return (result);
}
