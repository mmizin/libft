/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmizin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 16:46:39 by nmizin            #+#    #+#             */
/*   Updated: 2017/11/14 17:49:03 by nmizin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lndst;
	size_t	lnsrc;
	size_t	i;
	size_t	resl;

	i = 0;
	lnsrc = ft_strlen(src);
	lndst = ft_strlen(dst);
	if (size <= lndst)
		return (size + lnsrc);
	resl = lndst + lnsrc;
	while (src[i] != '\0')
	{
		if (lndst < size - 1)
		{
			dst[lndst] = src[i];
			lndst++;
		}
		i++;
	}
	dst[lndst] = '\0';
	return (resl);
}
