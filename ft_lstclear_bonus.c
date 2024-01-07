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

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*newl;

	if (!lst || !del)
		return ;
	while (*lst != NULL)
	{
		newl = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = newl;
	}
}
