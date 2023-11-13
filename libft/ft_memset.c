/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blatifat <blatifat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 20:57:59 by blatifat          #+#    #+#             */
/*   Updated: 2023/10/27 05:50:17 by blatifat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			l;
	unsigned char	*str;

	str = (unsigned char *)b;
	l = 0;
	while (l < len)
	{
		str[l] = (unsigned char) c;
		l++;
	}
	return (b);
}
