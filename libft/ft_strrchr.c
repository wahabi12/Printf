/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blatifat <blatifat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 05:37:07 by blatifat          #+#    #+#             */
/*   Updated: 2023/10/27 01:17:34 by blatifat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	i;
	int		len;

	i = (unsigned char)c;
	len = ft_strlen(str);
	if (i == 0)
		return ((char *)(str + len));
	while (--len >= 0)
	{
		if (*(str + len) == i)
		{
			return ((char *)(str + len));
		}
	}
	return (0);
}
