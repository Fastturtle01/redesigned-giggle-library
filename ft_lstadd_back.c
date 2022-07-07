/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeelarp <tmeelarp@42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 09:27:11 by tmeelarp          #+#    #+#             */
/*   Updated: 2022/07/07 09:50:51 by tmeelarp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*keep;

	keep = *lst;
	if (! (*lst))
		*lst = new;
	else
	{
		keep = ft_lstlast(keep);
		keep -> next = new;
	}
}
