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

int	ft_memcmp( const void * pointer1, const void * pointer2, size_t size )
{
	size_t	i;
	const 	unsigned char	*str1;
	const 	unsigned char	*str2;

	i = 0;
	str1 = (const unsigned char *)pointer1;
	str2 = (const unsigned char *)pointer2;
	while (i < size)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
