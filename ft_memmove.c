/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odguigou <odguigou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 20:34:11 by odguigou          #+#    #+#             */
/*   Updated: 2023/11/25 20:34:11 by odguigou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			n;

	if (!dst && !src)
		return (NULL);
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	n = 0;
	if (d > s)
	{
		n = len;
		while (n-- > 0)
			d[n] = s[n];
	}
	while (n < len)
	{
		d[n] = s[n];
		n++;
	}
	return (dst);
}

#include <stdio.h>
#include <string.h>
int main(){
	char s1[] = "oumaimadguigou";
	char s2[] = "rawane";
	printf("%s \n", ft_memmove(s1, s2, 5));
	printf("%s \n", memmove(s1, s2, 5));
}
