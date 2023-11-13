/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blatifat <blatifat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 02:52:51 by blatifat          #+#    #+#             */
/*   Updated: 2023/10/26 03:06:19 by blatifat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	dlen;
	size_t	slen;

	dlen = 0;
	slen = 0;
	while (dest[dlen] && dlen < destsize)
		dlen++;
	while (src[slen] && dlen + slen + 1 < destsize)
	{
		dest[dlen + slen] = src[slen];
		slen++;
	}
	if (dlen < destsize)
		dest[dlen + slen] = '\0';
	return (dlen + ft_strlen(src));
}
