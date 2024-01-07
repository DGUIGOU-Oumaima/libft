/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odguigou <odguigou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 20:32:03 by odguigou          #+#    #+#             */
/*   Updated: 2023/11/25 20:32:03 by odguigou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	lc;

	str = (unsigned char *)s;
	lc = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == lc)
			return ((void *) &s[i]);
		i++;
	}
	return (NULL);
}
