/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odguigou <odguigou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 20:26:06 by odguigou          #+#    #+#             */
/*   Updated: 2023/11/25 20:26:06 by odguigou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	get_len(int n)
{
	size_t	len;

	if (n < 0)
		len = 1;
	else
		len = 0;
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t		len;
	long int	m;
	char		*str;

	len = get_len(n);
	m = n;
	if (n < 0)
	{
		len++;
		m *= -1;
	}
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	*(str + len) = '\0';
	while (len--)
	{
		*(str + len) = m % 10 + '0';
		m = m / 10;
	}
	if (n < 0)
		*(str + 0) = '-';
	return (str);
}
