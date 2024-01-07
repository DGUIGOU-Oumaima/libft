/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odguigou <odguigou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 20:32:30 by odguigou          #+#    #+#             */
/*   Updated: 2023/11/25 20:32:30 by odguigou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *pointer1, const void *pointer2, size_t size )
{
	size_t				i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)pointer1;
	str2 = (unsigned char *)pointer2;
	if (size == 0)
		return (0);
	while (i < size)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>
int main(){
	char s1[] = "healobnjhb";
	char s2[] = "hellkobhbhjb";
	printf("%d \n", ft_memcmp(s1, s2, 5));
	printf("%d \n", memcmp(s1, s2, 5));
}
