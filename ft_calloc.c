/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odguigou <odguigou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 10:30:06 by odguigou          #+#    #+#             */
/*   Updated: 2024/01/07 22:11:06 by odguigou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t Count, size_t Size)
{
	void	*memory;

	memory = malloc(Size * Count);
	if (memory == NULL)
		return (0);
	ft_bzero(memory, Size * Count);
	return (memory);
}
