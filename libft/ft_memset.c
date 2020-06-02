/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhendric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 08:48:06 by nhendric          #+#    #+#             */
/*   Updated: 2018/06/05 03:47:57 by nhendric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memset(void *dst, int c, size_t len)
{
	char *str;

	str = (char *)dst;
	while (len > 0)
	{
		*str++ = (char)c;
		len--;
	}
	return ((void *)dst);
}
