/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarts <tmarts@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:56:07 by tmarts            #+#    #+#             */
/*   Updated: 2022/10/31 19:29:07 by tmarts           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	ft_lstdelone(t_list *lst, void (*del)(void*))
// {
// 	if (lst == 0)
// 		return ;
// 	del(lst->content);
// 	free (lst);
// 	return ;
// }
// void	ft_lstiter(t_list *lst, void (*f)(void *))
// {
// 	if (lst == 0)
// 		return ;
// 	while (lst != 0)
// 	{
// 		f (lst->content);
// 		lst = lst->next;
// 	}
// 	return ;
// }

// t_list	*ft_lstnew(void *content)
// {
// 	t_list	*new;

// 	new = (t_list *)malloc(sizeof(t_list));
// 	if (!new)
// 		return (0);
// 	new->content = content;
// 	new->next = 0;
// 	return (new);
// }

// void	ft_lstadd_back(t_list **lst, t_list *new)
// {
// 	t_list	*last;

// 	if (*lst == 0)
// 	{
// 		*lst = new;
// 		return ;
// 	}		
// 	last = *lst;
// 	last = ft_lstlast(*lst);
// 	last->next = new;
// 	return ;
// }

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*current;
	t_list	*new_node;
	t_list	**new_list;

	
	current = lst;
	if (lst == 0)
		return (NULL);
	while (current != 0)
	{
		if (!(ft_lstnew(f(current->content))))
		{
			ft_lstdelone(current, del);
			ft_lstdelone(new_node, del);
		}
		new_node = ft_lstnew(f(current->content));
		ft_lstadd_back(new_list, new_node);
		current = current->next;
	}
	return (*new_list);
}
// ft_lstmap
// t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
// Turn in files -
// Parameters lst: The address of a pointer to a node.
// f: The address of the function used to iterate on
// the list.
// del: The address of the function used to delete
// the content of a node if needed.
// Return value The new list.
// NULL if the allocation fails.
// External functs. malloc, free
// Description Iterates the list ’lst’ and applies the function
// ’f’ on the content of each node. Creates a new
// list resulting of the successive applications of
// the function ’f’. The ’del’ function is used to
// delete the content of a node if needed.