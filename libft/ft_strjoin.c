/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blatifat <blatifat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 21:16:15 by blatifat          #+#    #+#             */
/*   Updated: 2023/10/25 22:37:11 by blatifat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*result;

	if (!s1 || !s2)
		return (0);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	result = ft_calloc(len1 + len2 + 1, sizeof(char));
	if (result == 0)
		return (0);
	ft_strlcpy (result, s1, len1 + 1);
	ft_strlcpy (result + len1, s2, len2 + 1);
	return (result);
}
