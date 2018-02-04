/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmizin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 15:01:43 by nmizin            #+#    #+#             */
/*   Updated: 2017/11/28 16:47:21 by nmizin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_len(long n)
{
	size_t	i;

	i = 1;
	if (n < 0)
		i += 1;
	while (n /= 10)
		i++;
	return (i);
}

char		*ft_itoa(int n)
{
	char	*str;
	long	i;
	long	t;

	t = n;
	i = ft_len(n);
	if (!(str = ft_strnew(i)))
		return (NULL);
	str[i] = '\0';
	if (t < 0)
	{
		str[0] = '-';
		t = -t;
	}
	str[--i] = t % 10 + '0';
	while (t /= 10)
		str[--i] = t % 10 + '0';
	return (str);
}
