/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blatifat <blatifat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 05:38:55 by blatifat          #+#    #+#             */
/*   Updated: 2023/11/11 00:42:09 by blatifat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>
# include <stdio.h>
# include <stdbool.h>

int	ft_printf(const char *format, ...);
int	prt_ptr(void *address);
int	prt_str(char const *str);
int	prt_unsigned(unsigned int nbr);
int	prt_hex(unsigned int nbr, bool upper_case);
int	prt_int(int n);

#endif
