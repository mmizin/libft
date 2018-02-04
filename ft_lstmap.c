/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmizin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 13:32:35 by nmizin            #+#    #+#             */
/*   Updated: 2017/12/06 19:28:24 by nmizin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;
	t_list *buf;

	if (!lst)
		return (NULL);
	new = f(lst);
	buf = new;
	lst = lst->next;
	while (lst)
	{
		if (!(new->next = f(lst)))
			return (NULL);
		new = new->next;
		lst = lst->next;
	}
	return (buf);
}
