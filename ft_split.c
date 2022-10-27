/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarts <tmarts@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 19:42:54 by tmarts            #+#    #+#             */
/*   Updated: 2022/10/27 17:46:14 by tmarts           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

static int	ft_splitnr(char const *s, char c)
{
	int i;
	int	splitnr;
	
	if (!s)
		return(0);
	i = 0;
	splitnr = 0;
	while (*(s + i)!= 0)
	{
		if (*(s + i) != c && (*(s + i + 1) == c || * (s + i + 1) == 0))
			splitnr++;
		i++;
	}	
	return(splitnr);	
}

static char	*ft_next_start(char const *start, char c)
{	
	char	*next_start;
	
	while (*start == c && *start !=0)
		start++;
	next_start = (char *)start;
	return 	(next_start);
} // should I take to account if there is no next start?


// static int	ft_next_start(char const *s, char c) // start as int
// {	
// 	int	next_start;
	
// 	while (*(s + next_start) == c && *(s + next_start) !=0)
// 		next_start++;
// 	return 	(next_start);	
// } 

static int	ft_sub_len(char const *start, char c)
{
	int len;
	len = 0;
	while (*(start + len) != 0 && *(start + len) != c)
		len++;
	return (len);
}

// static int	ft_sub_len(char const *s, int start, char c) // with start as int
// {
// 	int len;
// 	len = 0;
// 	while (*(s + start + len) != 0 && *(s + start + len) != c)
// 		len++;
// 	return (len);
// }

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		nr_strings;
	int		splits_done;
	char	*start;
	int 	length;
	
	splits_done = 0;
	nr_strings = ft_splitnr(s, c);
	split = (char**)malloc((nr_strings + 1) * sizeof(char*));
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
			while (splits_done > 0)
			{
				splits_done--;
				free(split - splits_done);
				return(NULL);
			}
		splits_done++;
		
		// start = ft_next_start(start + length, c);
		// length = ft_sub_len(start, c);
		// *(split + splits_done) = ft_substr(start, 0, length);
		// splits_done++;
		// start = ft_next_start(start + length, c);
		// length = ft_sub_len(start, c);
		// *(split + splits_done) = ft_substr(start, 0, length);
		// splits_done++;
	}
	// printf ("%s\n", start);
	// printf ("%d\n", length);
	// printf ("%s\n", split[0]);
	// printf ("%s\n", split[1]);
	// printf ("%s\n", split[2]);
	return(split);
	
}

// int	main (void)
// {
// 	char	string[] = "cccdaadcccc cooro65cc";
// 	ft_split(string, 'c');
// }

// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	size_t	i;
// 	size_t	size;
// 	size_t	s_len;
// 	char	*sub;

// 	s_len = ft_strlen(s);
// 	size = len;
// 	if (s_len <= start)
// 		size = 0;
// 	else if (s_len < len + start)
// 		size = s_len - start;
// 	sub = (char *)malloc(size + 1);
// 	if (!sub)
// 		return (NULL);
// 	i = 0;
// 	while (i < size)
// 	{
// 		sub[i] = s[start + i];
// 		i++;
// 	}
// 	if (i == size)
// 			sub[i] = '\0';
// 	return (sub);
// }
