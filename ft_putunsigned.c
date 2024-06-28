/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthamir <mthamir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 11:29:50 by mthamir           #+#    #+#             */
/*   Updated: 2023/12/08 17:17:43 by mthamir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned(unsigned int i)
{
	int	count;

	count = 0;
	if (i >= 0 && i <= 9)
		return (ft_putchar (i + 48));
	if (i > 0)
	{
		count += ft_putunsigned(i / 10);
		count += ft_putchar((i % 10) + 48);
	}
	return (count);
}
