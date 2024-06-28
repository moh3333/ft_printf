/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthamir <mthamir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:50:58 by mthamir           #+#    #+#             */
/*   Updated: 2023/12/08 17:09:25 by mthamir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	helper(const char *format, va_list ap, int i)
{
	while (*format != '\0')
	{
		if (*format == '%' && *(format + 1) != 0)
		{
			format++;
			if (*format == 'c')
				i += ft_putchar(va_arg(ap, int));
			else if (*format == 'i' || *format == 'd')
				i += ft_putint(va_arg(ap, int));
			else if (*format == 's')
				i += ft_putstr(va_arg(ap, char *));
			else if (*format == 'u')
				i += ft_putunsigned(va_arg(ap, unsigned int));
			else if (*format == 'p')
				i += ft_putadress(va_arg(ap, unsigned long));
			else if (*format == 'x' || *format == 'X')
				i += ft_put_hexa(va_arg(ap, long int), *format);
			else
				i += ft_putchar(*format);
		}
		else if (*format != '%')
			i += write (1, format, 1);
		format++;
	}
	return (i);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		i;

	i = 0;
	if (write(1, "", 0) == -1)
		return (-1);
	va_start(ap, format);
	if (*format == 0)
		return (0);
	i += helper(format, ap, i);
	va_end(ap);
	return (i);
}
