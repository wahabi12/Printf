/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prt_hex.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blatifat <blatifat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 01:32:28 by blatifat          #+#    #+#             */
/*   Updated: 2023/11/11 04:41:28 by blatifat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static size_t	hexa_digits(unsigned int n)
{
	size_t	digits;

	digits = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		digits += 1;
		n /= 16;
	}
	return (digits);
}

static void	put_hexa(unsigned int nbr, bool upper_case)
{
	static char	uppercase[] = "0123456789ABCDEF";
	static char	lowercase[] = "0123456789abcdef";

	if (nbr >= 16)
		put_hexa((nbr / 16), upper_case);
	if (upper_case == true)
		write(1, &uppercase[nbr % 16], 1);
	else
		write(1, &lowercase[nbr % 16], 1);
}

int	prt_hex(unsigned int nbr, bool upper_case)
{
	put_hexa(nbr, upper_case);
	return (hexa_digits(nbr));
}
