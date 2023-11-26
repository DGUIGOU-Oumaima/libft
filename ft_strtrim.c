/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odguigou <odguigou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 20:43:08 by odguigou          #+#    #+#             */
/*   Updated: 2023/11/25 20:43:08 by odguigou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	help(char x, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == x)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	debut;
	int	fin;

	debut = 0;
	fin = strlen(s1) - 1;
	if (!s1)
		return (NULL);
	while (s1[debut] && help(s1[debut], set))
		debut ++;
	while (s1[fin] && help(s1[fin], set))
		fin--;
	if (fin == -1)
		return (ft_substr(s1, debut, 0));
	return (ft_substr(s1, debut, (fin - debut +2)));
}
