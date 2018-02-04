/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmizin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 19:47:42 by nmizin            #+#    #+#             */
/*   Updated: 2017/11/12 20:24:38 by nmizin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*sone;

	sone = (unsigned char *)s;
	while (n--)
	{
		if (*sone == (unsigned char)c)
			return (sone);
		sone++;
	}
	return (NULL);
}
