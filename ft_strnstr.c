/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmizin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 15:42:20 by nmizin            #+#    #+#             */
/*   Updated: 2017/11/20 20:53:29 by nmizin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	leng;

	if (*needle == '\0')
		return ((char *)haystack);
	leng = ft_strlen(needle);
	while (*haystack != '\0' && len >= leng)
	{
		if (ft_strncmp(haystack, needle, leng) == 0)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
