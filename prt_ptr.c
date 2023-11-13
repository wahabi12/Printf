/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prt_ptr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blatifat <blatifat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 01:32:16 by blatifat          #+#    #+#             */
/*   Updated: 2023/11/11 05:56:46 by blatifat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static	size_t	digits_ptr(uintptr_t n)
{
	size_t	digits;

	digits = 0;
	if (n == 0)
		return (3);
	while (n != 0)
	{
		n /= 16;
		digits += 1;
	}
	return (digits + 2);
}

static void	put_ptr(uintptr_t address)
{
	static char	digits[] = "0123456789abcdef";

	if (address >= 16)
		put_ptr(address / 16);
	write(1, &digits[address % 16], 1);
}

int	prt_ptr(void *address)
{
	if (address == NULL)
	{
		write(1, "0x0", 3);
		return (3);
	}
	else
	{
		write(1, "0x", 2);
		put_ptr((uintptr_t)address);
		return (digits_ptr((uintptr_t)address));
	}
}
