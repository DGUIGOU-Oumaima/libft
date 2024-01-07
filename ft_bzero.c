/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odguigou <odguigou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 20:25:11 by odguigou          #+#    #+#             */
/*   Updated: 2023/11/25 20:25:11 by odguigou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *dst, size_t n)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = (char *)dst;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int main() {
    char i_array[10]   = {7, 7, 7, 7, 7, 7, 7, 7, 7, 7};
    char s_array[12] = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    size_t pos = 0;
 
    ft_bzero(i_array, 2);
    ft_bzero(s_array, 3);*/
	/*
	int i_array[10]   = {7, 7, 7, 7, 7, 7, 7, 7, 7, 7};
    short s_array[12] = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    size_t pos = 0;
 
    ft_bzero(i_array, sizeof(int)*2);
    ft_bzero(s_array,sizeof(short)*3);
	*/
 /*
    for(; pos < 10; pos++) {
        printf("%d: %d\n", (pos + 1), i_array[pos]);
    }
 
    for(pos = 0; pos < 12; pos++) {
        printf("%d: %d\n", (pos + 1), s_array[pos]);
    }
 
    return 0;
}
*/
