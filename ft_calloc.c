/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odguigou <odguigou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 10:30:06 by odguigou          #+#    #+#             */
/*   Updated: 2023/11/26 11:15:22 by odguigou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t elementCount, size_t elementSize)
{
    void *memory;

    memory = malloc(elementSize * elementCount);
    if(memory == NULL)
        return (memory);
    ft_bzero(memory, elementSize * elementCount);
    return (memory);
}
