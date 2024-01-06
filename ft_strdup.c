/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odguigou <odguigou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 11:00:54 by odguigou          #+#    #+#             */
/*   Updated: 2024/01/06 16:01:14 by odguigou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s1)
{
    char    *new_str;
    int i;

    i = 0;
    while (s1[i])
        i++;
    new_str = malloc(sizeof(char) * i + 1);
    if (new_str == NULL)
        return (NULL);
    i = 0;
    while (s1[i])
    {
        new_str[i] = s1[i];
        i++;
    }
    new_str[i] = '\0';
    return (new_str);
}
