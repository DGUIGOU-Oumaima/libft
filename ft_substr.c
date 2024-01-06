/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odguigou <odguigou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 20:44:59 by odguigou          #+#    #+#             */
/*   Updated: 2023/11/25 20:44:59 by odguigou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*newstr;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(s) < len + start)
	{
		len = ft_strlen(s) - start;
		newstr = malloc(sizeof(char) * (len + 1));
	}
	else
	{
		len = ft_strlen(s);
		newstr = malloc(sizeof(char) * (len + 1));
	}
	if (!newstr)
		return (NULL);
	// start = start -1;
	while (i < len)
	{
		newstr[i++] = s[start++];
	}
	newstr[i] = '\0';
	return (newstr);
}
// #include "libc.h"
// int main(){
// 	printf("%s", ft_substr("hello", 0, 1));
// }