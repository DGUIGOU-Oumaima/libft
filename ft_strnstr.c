/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odguigou <odguigou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 20:41:26 by odguigou          #+#    #+#             */
/*   Updated: 2023/11/25 20:41:26 by odguigou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *mstr, const char *srch, size_t len)
{
	size_t	size;

	if (!mstr && !len)
		return (0);
	size = ft_strlen(srch);
	if (size == 0 || srch == mstr)
		return ((char *)mstr);
	while (*mstr && size <= len)
	{
		if (*mstr == srch[0] && ft_strncmp(mstr, srch, size) == 0)
		{
			return ((char *)mstr);
		}
		mstr++;
		len--;
	}
	return (NULL);
}
