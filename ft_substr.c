/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odguigou <odguigou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 20:44:59 by odguigou          #+#    #+#             */
/*   Updated: 2023/11/25 20:44:59 by odguigou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*newstr;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return ((char *) calloc(1, sizeof(char)));
	if (ft_strlen(s) <= len + start)
		newstr = malloc(sizeof(char) * (ft_strlen(s) - start + 1));
	else
		newstr = malloc(sizeof(char) * (len + 1));
	if (!newstr)
		return (NULL);
	start = start -1;
	while (s[start] && i < len)
	{
		newstr[i++] = s[start++];
	}
	newstr[i] = '\0';
	return (newstr);
}
