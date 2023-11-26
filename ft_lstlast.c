/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odguigou <odguigou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 20:29:29 by odguigou          #+#    #+#             */
/*   Updated: 2023/11/25 20:29:29 by odguigou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list   *help;

	help = lst;
	while(help && help->next)
	{
		help = help->next;
	}
	return (help);
}
