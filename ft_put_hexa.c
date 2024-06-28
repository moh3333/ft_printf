/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hexa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthamir <mthamir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 16:45:32 by mthamir           #+#    #+#             */
/*   Updated: 2023/12/08 17:14:27 by mthamir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_hexa(unsigned int s, const char format)
{
	int		i;
	char	*base;

	i = 0;
	if (format == 'x')
		base = "0123456789abcdef";
	else if (format == 'X')
		base = "0123456789ABCDEF";
	if (s < 0)
	{
		i += ft_putchar('-');
		s = -s;
	}
	if (s < 16)
		i += ft_putchar(base[s]);
	if (s >= 16)
	{
		i += ft_put_hexa(s / 16, format);
		i += ft_putchar(base[s % 16]);
	}
	return (i);
}
