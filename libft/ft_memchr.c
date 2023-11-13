/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blatifat <blatifat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 23:43:31 by blatifat          #+#    #+#             */
/*   Updated: 2023/10/24 07:07:50 by blatifat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		search_byt;
	const unsigned char	*memory_blc;

	search_byt = c;
	memory_blc = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (memory_blc[i] == search_byt)
			return ((void *)s + i);
		i++;
	}
	return (0);
}
