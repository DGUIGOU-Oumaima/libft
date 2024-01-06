/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odguigou <odguigou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 20:41:03 by odguigou          #+#    #+#             */
/*   Updated: 2023/11/25 20:41:03 by odguigou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *first, const char *second, size_t length)
{
	size_t	i;

	i = 0;
	if (length == 0)
		return (0);
	while (first[i] && second[i] && first[i] == second[i] && i < length)
	{
		i++;
	}
	if (i == length)
	{
		return (0);
	}
	return ((unsigned char)first[i] - (unsigned char)second[i]);
}

