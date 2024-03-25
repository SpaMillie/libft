/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 18:28:13 by mspasic           #+#    #+#             */
/*   Updated: 2024/03/25 19:16:56 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**********************************************************************/
/* parameters: the node to free (lst) and the address of the function */
/* used to delete the content                                         */
/* return value: none                                                 */
/* description: Takes as a parameter a node and frees the memory of   */
/* the node’s content using the function ’del’ given as a parameter   */
/* and free the node. The memory of ’next’ must not be freed          */
/**********************************************************************/

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lsti || !del)
		return ;
	del (lst->content);
	free (lst);
}
