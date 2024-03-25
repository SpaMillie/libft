/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 13:57:51 by mspasic           #+#    #+#             */
/*   Updated: 2024/03/25 17:16:21 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**************************************************/
/* parameters: the beginning of the list          */
/* return value: last node of the list            */
/* description: returns the last node of the list */
/**************************************************/

#include "libft.h"

t_list	*lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);		//if it can't enter the while loop, won't the function just return NULL if !lst?
	while(lst -> next != NULL)
		lst = lst -> next;
	return (lst);
}
