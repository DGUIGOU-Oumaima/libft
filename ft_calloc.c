/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odguigou <odguigou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 10:30:06 by odguigou          #+#    #+#             */
/*   Updated: 2023/11/26 14:34:05 by odguigou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t Count, size_t Size)
{
	void	*memory;
	if (Count && Size && Count > (SIZE_MAX / Size))
		return (0);
	memory = malloc(Size * Count);
	if (memory == NULL)
		return (0);
	ft_bzero(memory, Size * Count);
	return (memory);
}
#include <stdio.h>
int main(){
	int *tab;
	int j = 7;
	tab = ft_calloc(5, sizeof(int));
	for(int i=0; i<5; i++)
	{
		printf("%d \n", tab[i]);
	}
	for(int i=0; i<5; i++)
	{
		tab[i] = j++;
	}
	for(int i=0; i<5; i++)
	{
		printf("%d \n", tab[i]);
	}
}