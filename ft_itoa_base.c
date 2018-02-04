/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmizin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/04 21:42:07 by nmizin            #+#    #+#             */
/*   Updated: 2018/02/04 22:22:18 by nmizin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		f_mem(long value, int base)
{
	int mem;

	mem = 0;
	if ((value < 0 && base == 10) || value == 0)
	{
		mem++;
		value = -value;
	}
	while (value)
	{
		mem++;
		value /= base;
	}
	return (mem);
}

static	void	crt_num(char *str, long val, int base, int mem)
{
	char *alpha;

	alpha = "0123456789ABCDEF";
	str[--mem] = alpha[val % base];
	while (val /= base)
	{
		str[--mem] = alpha[val % base];
	}
}

char			*ft_itoa_base(int value, int base)
{
	char	*str;
	int		mem;
	long	val;

	val = value;
	mem = f_mem(value, base);
	str = (char *)malloc(sizeof(char) * (mem + 1));
	str[mem] = '\0';
	if (value < 0 && base == 10)
	{
		str[0] = '-';
		val = -val;
	}
	crt_num(str, val, base, mem);
	return (str);
}
