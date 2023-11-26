/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odguigou <odguigou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 20:27:50 by odguigou          #+#    #+#             */
/*   Updated: 2023/11/25 20:27:50 by odguigou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *help;

	if (lst)
	{
		while (*lst)
		{
			help = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = help;
		}
	}
}
