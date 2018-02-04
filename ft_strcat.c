/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmizin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 12:52:21 by nmizin            #+#    #+#             */
/*   Updated: 2017/11/16 12:52:31 by nmizin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strcat(char *s1, const char *s2)
{
	int		count;
	size_t	s;

	count = 0;
	while (s1[count])
		count++;
	s = count;
	count = 0;
	while (s2[count])
	{
		s1[s] = s2[count];
		s++;
		count++;
	}
	s1[s] = '\0';
	return (s1);
}
