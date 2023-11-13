/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blatifat <blatifat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 21:53:26 by blatifat          #+#    #+#             */
/*   Updated: 2023/10/25 23:07:57 by blatifat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	ft_num_len(int n, int base);

char	*ft_itoa(int n)
{
	int			len;
	char		*res;
	const char	*dig;

	dig = "0123456789";
	len = ft_num_len(n, 10);
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (0);
	res[len] = '\0';
	if (n == 0)
		res[0] = '0';
	if (n < 0)
		res[0] = '-';
	while (n)
	{
		if (n > 0)
			res[--len] = dig[n % 10];
		else
			res[--len] = dig[n % 10 * -1];
		n /= 10;
	}
	return (res);
}

static int	ft_num_len(int n, int base)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0 && base == 10)
		len++;
	while (n != 0)
	{
		n /= base;
		len++;
	}
	return (len);
}
