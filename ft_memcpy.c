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

void	*ft_memcpy(void *destination, const void *source, size_t size)
{
	size_t	i;

	if (!destination && !source)
		return (0);
	i = 0;
	while (i < size)
	{
		*((unsigned char *)(destination + i)) = *((unsigned char *)(source + i));
		i++;
	}
	return (destination);
}
