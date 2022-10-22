/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarts <tmarts@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 13:10:58 by tmarts            #+#    #+#             */
/*   Updated: 2022/10/22 13:38:28 by tmarts           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include  <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (i < dstsize - 1 && src[i] != 0 && dstsize != 0)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	while (src[i] != 0)
		i++;
	return (i);git 
}

// int	main(void)
// {
// 	const char	src[] = "This copied now";
// 	char		dst[10] = "";

// 	printf("src: %s\n", src);
// 	printf("dst before: %s\n", dst);
// 	printf("ft_strlcpy result: %zu\n", ft_strlcpy(dst, src, 0));
// 	//printf("strlcpy result: %zu\n", strlcpy(dst, src,0));
// 	printf("dst after: %s\n", dst);
// 	printf("src after: %s\n", src);
// }