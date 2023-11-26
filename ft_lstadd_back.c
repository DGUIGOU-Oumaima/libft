/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odguigou <odguigou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 20:26:37 by odguigou          #+#    #+#             */
/*   Updated: 2023/11/25 20:26:37 by odguigou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*help;

	help = *lst;
	if (!lst || !new)
		return ;
	if (*lst)
		*lst = new;
	else
	{
		while (help->next != NULL)
		{
			help = help->next;
		}
		help->next = new;
	}
}
