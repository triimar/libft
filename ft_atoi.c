/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarts <tmarts@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 22:36:55 by tmarts            #+#    #+#             */
/*   Updated: 2022/10/24 18:59:24 by tmarts           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdlib.h>
// #include <stdio.h>
int	ft_atoi(const char *str)
{
	int	intvalue;
	int	neg_pos;

	intvalue = 0;
	neg_pos = 1;
	while ((*str == ' ' || *str == '\f' || *str == '\n'
			|| *str == '\r' || *str == '\t' || *str == '\v'))
		str++;
	if (*str == '-')
	{
		neg_pos = -1;
		str++;
	}	
	else if (*str == '+')
		str++;
	while (*str >= 48 && *str <= 57)
	{
		intvalue = intvalue * 10 + (*str - '0');
		str++;
	}
	return ((intvalue * neg_pos));
}

// int	main(void)
// {
// 	char	s1[] = "        -4700llljohdgj";
// 	char	s2[] = "- 000047000  -608963hjghhj";

// 	printf("%d\n", ft_atoi(s1));
// 	printf("%d\n", atoi(s2));
// }