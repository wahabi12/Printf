/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blatifat <blatifat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 00:55:42 by blatifat          #+#    #+#             */
/*   Updated: 2023/11/11 06:15:31 by blatifat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"

static int	convert_char(va_list args)
{
	ft_putchar_fd(va_arg(args, int), 1);
	return (1);
}

static int	conversion(char iterate, va_list args)
{
	size_t	count;

	count = 0;
	if (iterate == '%')
	{
		write(1, "%", 1);
		count += 1;
		return (count);
	}
	else if (iterate == 'c')
		return (convert_char(args));
	else if (iterate == 's')
		return (prt_str(va_arg(args, char *)));
	else if (iterate == 'p')
		return (prt_ptr(va_arg(args, void *)));
	else if (iterate == 'd' || iterate == 'i')
		return (prt_int(va_arg(args, int)));
	else if (iterate == 'u')
		return (prt_unsigned(va_arg(args, unsigned int)));
	else if (iterate == 'x')
		return (prt_hex(va_arg(args, size_t), false));
	else if (iterate == 'X')
		return (prt_hex(va_arg(args, size_t), true));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		len;

	if (!format)
		return (0);
	i = 0;
	len = 0;
	va_start (args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			len += conversion(format[i], args);
		}
		else
			len += write(1, &format[i], 1);
		i++;
	}
	va_end(args);
	return (len);
}
