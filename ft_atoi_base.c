/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmizin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/04 21:50:32 by nmizin            #+#    #+#             */
/*   Updated: 2018/02/04 21:54:45 by nmizin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static	int		f_get_num(char str)
{
	int num;

	num = 0;
	if (str >= 97 && str <= 122)
		str = str - 32;
	if (str >= '0' && str <= '9')
		num = str - '0';
	else
		num = str - 'A' + 10;
	return (num);
}

int				ft_atoi_base(char *str, int base)
{
	int num;
	int sign;

	num = 0;
	sign = 1;
	if (*str == '-' && base == 10 && str++)
		sign = -1;
	while (*str)
		num = num * base + f_get_num(*str++);
	return (num * sign);
}
