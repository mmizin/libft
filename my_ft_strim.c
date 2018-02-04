/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_ft_strim.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmizin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 14:28:42 by nmizin            #+#    #+#             */
/*   Updated: 2017/12/07 10:42:38 by nmizin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*my_ft_strim(char *s, char c)
{
	int start;
	int len;

	if (!s)
		return (NULL);
	start = 0;
	while (s[start] == c)
		start++;
	if (s[start] == '\0')
		return (ft_strdup(s + start));
	len = ft_strlen(s) - 1;
	while ((s[len] == c) && len > 0)
		len--;
	return (ft_strsub(s, start, len - start + 1));
}
