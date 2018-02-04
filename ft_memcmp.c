/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmizin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 17:47:51 by nmizin            #+#    #+#             */
/*   Updated: 2017/11/13 18:39:52 by nmizin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*sone;
	unsigned char	*stwo;
	size_t			i;

	sone = (unsigned char*)s1;
	stwo = (unsigned char*)s2;
	i = -1;
	while (++i < n)
	{
		if (sone[i] != stwo[i])
			return (sone[i] - stwo[i]);
	}
	return (0);
}
