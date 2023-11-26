/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odguigou <odguigou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 20:39:12 by odguigou          #+#    #+#             */
/*   Updated: 2023/11/25 20:39:12 by odguigou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char * string, int searchedChar )
{
	int i;
	
	i = 0;
	while(string[i])
	{
		if (string[i] == (char )searchedChar)
			return ((char *)&string[i]);
		i++;
	}
	if ((char)!searchedChar)
	{
		return ((char *) &string[i]);
	}
	return (NULL);
}
