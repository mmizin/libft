/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_ft_wordcrt.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmizin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 19:14:41 by nmizin            #+#    #+#             */
/*   Updated: 2017/11/26 19:14:49 by nmizin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*my_ft_wordcrt(char *s, char c)
{
	size_t	i;
	char	*s2;
	char	*temp;

	i = 0;
	while (*s == c)
		s++;
	if (*s == '\0')
		return (NULL);
	i = my_ft_lettercount(s, c);
	s2 = (char *)malloc(sizeof(char) * i + 1);
	temp = s2;
	while (i--)
		*s2++ = *s++;
	*s2 = '\0';
	return (temp);
}
