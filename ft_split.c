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

static int	ft_count_w(char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == c)
			i++;
		else
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
		}
	}
	return (count);
}

static char	**free_arr(char **ptr, int i)
{
	while (i > 0)
	{
		i--;
		free(ptr[i]);
	}
	free(ptr);
	return (0);
}

static char	*ft_put_word(char *word, char const *s, int i, int word_len)
{
	int	x;

	x = 0;
	while (word_len > 0)
	{
		word[x] = s[i - word_len];
		x++;
		word_len--;
	}
	word[x] = '\0';
	return (word);
}

static char	**ft_split_words(const char *s, char c, char **sfinal,
int num_words)
{
	int	i;
	int	word;
	int	word_len;

	i = 0;
	word = 0;
	word_len = 0;
	while (word < num_words)
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			i++;
			word_len++;
		}
		sfinal[word] = (char *)malloc(sizeof(char) * (word_len + 1));
		if (!sfinal[word])
			return (free_arr(sfinal, word));
		ft_put_word(sfinal[word], s, i, word_len);
		word_len = 0;
		word++;
	}
	sfinal[word] = 0;
	return (sfinal);
}

char	**ft_split(char const *s, char c)
{
	char			**sfinal;
	unsigned int	num_words;

	if (!s)
		return (0);
	num_words = ft_count_w(s, c);
	sfinal = (char **)malloc(sizeof(char *) * (num_words + 1));
	if (!sfinal)
		return (0);
	sfinal = ft_split_words(s, c, sfinal, num_words);
	return (sfinal);
}
