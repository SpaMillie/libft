/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 17:57:45 by mspasic           #+#    #+#             */
/*   Updated: 2024/03/25 19:17:11 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*****************************************************/
/* parameters: the beginning of the list(lst)        */
/* return value: the length of the list              */
/* description: counts the number of nodes in a list */
/*****************************************************/

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	n;

	n = 0;
	while (lst)
	{
		lst = lst->next;
		n++;
	}
	return (n);
}
