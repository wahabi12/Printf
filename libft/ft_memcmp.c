/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blatifat <blatifat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 01:23:08 by blatifat          #+#    #+#             */
/*   Updated: 2023/10/25 22:01:55 by blatifat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	const char	*str1;
	const char	*str2;
	size_t		i;

	if (num == 0)
		return (0);
	str1 = (const char *)ptr1;
	str2 = (const char *)ptr2;
	i = 0;
	while ((i < num - 1) && str1[i] == str2[i])
		i++;
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
