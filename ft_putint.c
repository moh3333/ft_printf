/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthamir <mthamir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 16:19:57 by mthamir           #+#    #+#             */
/*   Updated: 2023/12/09 10:11:04 by mthamir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putint(int nbr)
{
	int	i;

	i = 0;
	if (nbr == -2147483648)
		return (write (1, "-2147483648", 11));
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
		i++;
	}
	if (nbr <= 9)
		i += ft_putchar(nbr + 48);
	if (nbr > 9)
	{
		i += ft_putint(nbr / 10);
		i += ft_putchar((nbr % 10) + 48);
	}
	return (i);
}
