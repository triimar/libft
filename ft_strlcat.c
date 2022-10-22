/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarts <tmarts@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 14:04:45 by tmarts            #+#    #+#             */
/*   Updated: 2022/10/22 22:41:29 by tmarts           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>
#include "libft.h"

// size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
// {
// 	size_t	i;
// 	size_t	j;

// 	i = 0;
// 	j = 0;
// 	while (dst[i] != 0)
// 		i++;
// 	if (dstsize != 0 && dstsize > i)
// 	{
// 		while (src[j] != 0 && dstsize > (i + j + 1))
// 		{
// 			dst[i + j] = src[j];
// 			j++;
// 		}
// 		dst[i + j] = 0;
// 	}
// 	while (src[j] != 0)
// 		j++;
// 	if (dstsize == 0|| dstsize < i)
// 		return (j + dstsize);
// 	return (i + j);
// }

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] != 0)
		i++;
	while (src[j] != 0)
		j++;
	if (dstsize == 0 || dstsize <= i)
		return (j + dstsize);
	j = 0;
	while (src[j] != 0 && dstsize > (i + 1))
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = 0;
	while (src[j] != 0)
		j++;
	return (i + j);
}

// int	main(void)
// {
// 	const char	src[] = "lorem ipsum dolor sit amet";
// 	char		dst[15]  = "rrrrrrrrrrrrrr";
// 	const char	osrc[] = "lorem ipsum dolor sit amet";
// 	char		odst[15] = "rrrrrrrrrrrrrr";

// 	printf("ft_strlcat result: %zu\n", ft_strlcat(dst, src, 7));
// 	printf("strlcat result: %zu\n", strlcat(odst, osrc, 7));
// 	printf("dst after: %s\n", dst);
// 	printf("odst after: %s\n", odst);
// 	printf("src after: %s\n", src);
// 	printf("osrc after: %s\n", osrc);
// 	return (0);
// }