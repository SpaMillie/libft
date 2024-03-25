/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 17:26:47 by mspasic           #+#    #+#             */
/*   Updated: 2024/03/25 17:36:57 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*****************************************************/
/* parameters: the address of a pointer to the 1st   */
/* link of a list (lst) and the address of a pointer */
/* to the node to tbe added to the list	             */
/* return value: none                                */
/* description: Adds the node ’new’ at the beginning */
/* of the list.							    	     */
/*****************************************************/

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	int	n;

	n = ft_lstsize(*lst);
	while (n)
	{


