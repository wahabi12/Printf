/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blatifat <blatifat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 22:37:42 by blatifat          #+#    #+#             */
/*   Updated: 2023/10/27 02:36:24 by blatifat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	n;
	char	*nstr;
	int		allocate;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (start + len < ft_strlen(s))
		allocate = len;
	else
		allocate = (int)ft_strlen(s) - (int)start;
	nstr = (char *)malloc(allocate + 1);
	if (!nstr)
		return (NULL);
	i = start;
	n = 0;
	while (s[i] != '\0' && n < len)
		nstr[n++] = s[i++];
	nstr[n] = '\0';
	return (nstr);
}
