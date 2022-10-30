/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarts <tmarts@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 19:18:16 by tmarts            #+#    #+#             */
/*   Updated: 2022/10/30 20:23:43 by tmarts           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (*lst == 0)
		*lst = new;
	else
	{
	
}

// void	ft_lstadd_front(t_list **lst, t_list *new)
// {
// 	new->next = *lst;
// }

// t_list	*ft_lstlast(t_list *lst)
// {
// 	t_list	*current;

// 	current = lst;
// 	while (current != 0)
// 	{
// 		if (current->next == 0)
// 			return (current);
// 		current = current->next;
// 	}	
// 	return (0);
// }

// ft_lstadd_back
// Prototype void ft_lstadd_back(t_list **lst, t_list *new);
// Turn in files -
// Parameters lst: The address of a pointer to the first link of
// a list.
// new: The address of a pointer to the node to be
// added to the list.
// Return value None
// External functs. None
// Description Adds the node ’new’ at the end of the list.