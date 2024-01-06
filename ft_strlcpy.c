/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odguigou <odguigou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 22:37:26 by odguigou          #+#    #+#             */
/*   Updated: 2023/11/25 22:37:26 by odguigou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *destination, char *source, size_t destinationsize)
{
	size_t	source_len;
	size_t	i;

	source_len = ft_strlen(source);
	i = 0;
	while (source[i] && i < destinationsize - 1)
	{
		destination[i] = source[i];
		i++;
	}
	destination[i] = '\0';
	return (source_len);
}
