/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarts <tmarts@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 19:42:54 by tmarts            #+#    #+#             */
/*   Updated: 2022/10/27 19:17:18 by tmarts           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

static int	ft_splitnr(char const *s, char c)
{
	int	i;
	int	splitnr;

	if (!s)
		return (0);
	i = 0;
	splitnr = 0;
	while (*(s + i) != 0)
	{
		if (*(s + i) != c && (*(s + i + 1) == c || *(s + i + 1) == 0))
			splitnr++;
		i++;
	}	
	return (splitnr);
}

static char	*ft_next_start(char const *start, char c)
{	
	char	*next_start;

	while (*start == c && *start != 0)
		start++;
	next_start = (char *)start;
	return (next_start);
}

static int	ft_sub_len(char const *start, char c)
{
	int	len;

	len = 0;
	while (*(start + len) != 0 && *(start + len) != c)
		len++;
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		nr_strings;
	int		splits_done;
	char	*start;
	int		length;

	splits_done = 0;
	nr_strings = ft_splitnr(s, c);
	split = (char **) malloc ((nr_strings + 1) * sizeof (char *));
	if (!split)
		return (NULL);
	start = (char *)s;
	length = 0;
	while (splits_done < nr_strings)
	{
		start = ft_next_start(start + length, c);
		length = ft_sub_len(start, c);
		*(split + splits_done) = ft_substr(start, 0, length);
		if (!(split + splits_done))
		{
			while (splits_done > 0)
			{
				splits_done--;
				free (split - splits_done);
			}
			free (*split);
			return (NULL);
			
		}
		splits_done++;
	}
	*(split + splits_done) = 0;
	return (split);
}
