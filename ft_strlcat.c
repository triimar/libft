/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarts <tmarts@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 14:04:45 by tmarts            #+#    #+#             */
/*   Updated: 2022/10/24 00:58:59 by tmarts           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	i = 0;
	if (dstsize != 0 && dstlen < dstsize)
	{
		while (*src != 0 && i < (dstsize - dstlen - 1))
		{
			*(dst + dstlen + i) = *(src + i);
			i++;
		}
		*(dst + dstlen + i) = 0;
		return (dstlen + srclen);
	}
	return (srclen + dstsize);
}

// int	main(void)
// {
// 	const char	src[] = "";
// 	char		dst[8]  = "a";
// 	const char	osrc[] = "";
// 	char		odst[8]  = "a";

// 	printf("ft_strlcat result: %zu\n", ft_strlcat(dst, src, 3));
// 	printf("strlcat result: %zu\n", strlcat(odst, osrc, 3));
// 	printf("dst after: %s\n", dst);
// 	printf("odst after: %s\n", odst);
// 	printf("src after: %s\n", src);
// 	printf("osrc after: %s\n", osrc);
// 	return (0);
// }