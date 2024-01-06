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

void	*ft_memset(void *pointer, int value, size_t count)
{
	while (count --)
	{
		*((unsigned char *) pointer + count) = (unsigned char) value;
	}
	return (pointer);
}
// #include <libc.h>
// int main ()
// {
// 	int x = 13;

// 	ft_memset(&x, 255, 4);
// 	ft_memset(&x, 255, 3);
// 	// ft_memset(&x, 255, 2);
// 	// ft_memset(&x, 255, 1);
// 	printf("%d", x);
// }