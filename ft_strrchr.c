/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odguigou <odguigou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 20:42:19 by odguigou          #+#    #+#             */
/*   Updated: 2023/11/25 20:42:19 by odguigou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int searchedChar)
{
	int	i;

	i = ft_strlen(string) - 1;
	while (i >= 0)
	{
		if (string[i] == (char)searchedChar)
			return ((char *)&string[i]);
		i--;
	}
	if (!(char)searchedChar)
	{
		return ((char *) &string[ft_strlen(string)]);
	}
	return (NULL);
}
