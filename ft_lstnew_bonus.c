/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 17:17:03 by mspasic           #+#    #+#             */
/*   Updated: 2024/03/25 19:27:06 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*****************************************************/
/* parameters: 'content'(for the new node)           */
/* return value: the new node                        */
/* description: Allocates (with malloc(3)) and       */
/* returns a new node. The member variable ’content’ */
/* is initialized with the value of the parameter    */
/* ’content’. The variable ’next’ is initialized     */
/* to NULL. 									     */
/*****************************************************/

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
