/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odguigou <odguigou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 20:33:32 by odguigou          #+#    #+#             */
/*   Updated: 2023/11/25 20:33:32 by odguigou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*d;

	i = 0;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (!d && !s)
		return (NULL);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
#include <stdio.h>
#include <string.h>
int main(){
	char s1[] = "ouma";
	char s2[] = "hellkobhbhjb";
	printf("%s \n", ft_memcpy(s1, s2, 5));
	printf("%s \n", memcpy(s1, s2, 5));
}
