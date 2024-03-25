/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 18:15:19 by mspasic           #+#    #+#             */
/*   Updated: 2024/03/25 19:16:00 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*****************************************************/
/* parameters: the address to a pointer to the 1st   */
/* link of a list (lst) and the address of a pointer */
/* to the node to be added to the list	             */
/* return value: none                                */
/* description: Adds the node ’new’ at the end of    */
/* the list.							    	     */
/*****************************************************/

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!new)
		return ;
	if (*lst)
	{
		temp = ft_lstlast(*lst);
		temp->next = new;
	}
	else
		*lst = new;
}
