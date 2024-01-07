/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odguigou <odguigou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 20:34:34 by odguigou          #+#    #+#             */
/*   Updated: 2023/11/25 20:34:34 by odguigou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		*(unsigned char *)(b + i) = (unsigned char)c;
		i++;
	}
	return (b);
}
 #include <stdio.h>
 int main ()
 {
	int x = 13;

	ft_memset(&x, 255, 4);
	ft_memset(&x, 255, 3);
	ft_memset(&x, 255, 2);
 	ft_memset(&x, 255, 1);
 	printf("%d", x);
 }