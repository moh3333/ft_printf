/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthamir <mthamir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 16:06:33 by mthamir           #+#    #+#             */
/*   Updated: 2023/12/09 10:11:07 by mthamir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int	ft_printf(const char *format, ...);
int	ft_putunsigned(unsigned int i);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putint(int nbr);
int	ft_putadress(unsigned long s);
int	ft_put_hexa(unsigned int s, const char format);

#endif