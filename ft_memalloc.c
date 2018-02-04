/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmizin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 17:01:35 by nmizin            #+#    #+#             */
/*   Updated: 2017/11/23 18:28:37 by nmizin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	char *arr;

	arr = (char *)malloc(sizeof(char) * size);
	if (!arr)
		return (NULL);
	ft_bzero(arr, size);
	return (arr);
}
