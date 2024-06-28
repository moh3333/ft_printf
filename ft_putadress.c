/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthamir <mthamir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 09:49:47 by mthamir           #+#    #+#             */
/*   Updated: 2023/12/08 17:15:21 by mthamir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	recursion(unsigned long s)
{
	int		i;
	char	*base;

	i = 0;
	base = "0123456789abcdef";
	if (s < 16)
		i += ft_putchar(base[s]);
	if (s >= 16)
	{
		i += recursion(s / 16);
		i += ft_putchar((base[s % 16]));
	}
	return (i);
}

int	ft_putadress(unsigned long s)
{
	int	i;

	i = 0;
	i += write (1, "0x", 2);
	i += recursion(s);
	return (i);
}
