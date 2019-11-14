/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanetti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 13:40:12 by fmanetti          #+#    #+#             */
/*   Updated: 2019/11/14 16:52:29 by fmanetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *s)
{
	int x;
	int c;
	int res;
	int sign;

	x = 0;
	c = 0;
	res = 0;
	while (s[x] == ' ' || (s[x] >= 8 && s[x] <= 13))
		x++;
	if (s[x] == '-')
		sign = 1;
	while (s[x + c] == '+' || s[x + c] == '-')
		c++;
	while (s[x + c] >= '0' && s[x + c] <= '9')
	{
		res *= 10;
		res += (int)s[x + c] - '0';
		x++;
	}
	if (c > 1)
		return (0);
	else if (sign == 1)
		return (-res);
	return (res);
}
