/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blatifat <blatifat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 01:23:40 by blatifat          #+#    #+#             */
/*   Updated: 2023/10/27 03:11:50 by blatifat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	n;
	unsigned int	i;

	if (*needle == '\0')
		return ((char *)haystack);
	n = 0;
	while (haystack[n] && (size_t)n < len)
	{
		if (haystack[n] == needle[0])
		{
			i = 1;
			while (needle[i] && haystack[n + i] == needle[i]
				&& (size_t)(n + i) < len)
				i++;
			if (needle[i] == '\0')
				return ((char *)&haystack[n]);
		}
		n++;
	}
	return (NULL);
}
