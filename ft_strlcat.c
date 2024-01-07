/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odguigou <odguigou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 22:56:28 by odguigou          #+#    #+#             */
/*   Updated: 2023/11/25 22:56:28 by odguigou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	ild;
	size_t	srclen;

	i = 0;
	ild = 0;
	srclen = ft_strlen(src);
	if (!dst && !dstsize)
		return (srclen);
	while (dst[ild] && ild < dstsize)
	{
		ild++;
	}
	while (src[i] && ild + i + 1 < dstsize)
	{
		dst[ild + i] = src[i];
		i++;
	}
	if (ild + i < dstsize)
	{
		dst[ild + i] = '\0';
	}
	return (ild + srclen);
}
