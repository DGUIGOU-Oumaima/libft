/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odguigou <odguigou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 20:37:22 by odguigou          #+#    #+#             */
/*   Updated: 2023/11/25 20:37:22 by odguigou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	safe_malloc(char **token_v, int pos, int len)
{
	int	i;

	i = 0;
	token_v[pos] = malloc(len * sizeof(char));
	if (token_v[pos] == NULL)
	{
		while (i < pos)
			free(token_v[i]);
		free(token_v);
		return (1);
	}
	return (0);
}

int	fill(char **token_v, char const *s, char c)
{
	int	i;
	int	len;

	i = 0;
	while (s)
	{
		len = 0;
		while (*s == c)
			s++;
		while (*s != c)
		{
			len++;
			s++;
		}
		if (len)
		{
			if (safe_malloc(token_v, i, len + 1))
				return (1);
			ft_strlcpy(token_v[i], s - len, len);
		}
		i++;
	}
	return (0);
}

int	count_tokens(char const *s, char c)
{
	int	tokens;
	int	check;

	tokens = 0;
	while (s)
	{
		check = 0;
		while (s && *s == c)
			s++;
		while (s && *s != c)
		{
			if (!check)
			{
				tokens++;
				check = 1;
			}
			s++;
		}
	}
	return (tokens);
}

char	**ft_split(char const *s, char c)
{
	int	tokens;
	char	**token_v;

	tokens = 0;
	if (!s && !*s)
		return (NULL);
	tokens = count_tokens(s, c);
	token_v = malloc((tokens + 1) * sizeof(char));
	if (token_v == NULL)
		return (NULL);
	token_v[tokens] = NULL;
	if (fill(token_v, s, c))
		return (NULL);
	return (token_v);
}
