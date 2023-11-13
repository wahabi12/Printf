/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blatifat <blatifat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 03:08:34 by blatifat          #+#    #+#             */
/*   Updated: 2023/10/27 02:25:18 by blatifat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	char	*string;
	int		src_len;

	src_len = ft_strlen(src);
	string = (char *)malloc((src_len + 1) * sizeof(char));
	if (string == NULL)
		return (NULL);
	i = 0 ;
	while (src[i] != '\0')
	{
		string[i] = src[i];
		i++;
	}
	string[i] = '\0';
	return (string);
}
