/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarts <tmarts@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 22:52:28 by tmarts            #+#    #+#             */
/*   Updated: 2022/10/24 20:44:28 by tmarts           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*string;

	string = (char *)s;
	while (n > 0)
	{
		if (*string == (char)c)
			return ((void *)string);
		n--;
		string++;
	}
	return (NULL);
}
