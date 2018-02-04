/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmizin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 14:28:54 by nmizin            #+#    #+#             */
/*   Updated: 2017/11/24 15:37:55 by nmizin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*s1;
	size_t	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	s1 = ft_strnew(ft_strlen(s));
	if (!s1)
		return (NULL);
	while (s[i])
	{
		s1[i] = f(s[i]);
		i++;
	}
	return (s1);
}
