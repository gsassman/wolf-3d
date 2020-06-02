/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhendric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 11:43:43 by nhendric          #+#    #+#             */
/*   Updated: 2018/06/06 15:24:41 by nhendric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dst, const void *src, int c, size_t len)
{
	int						i;
	const unsigned char		*csrc;
	unsigned char			*cdst;

	i = 0;
	csrc = src;
	cdst = dst;
	while (len > 0)
	{
		cdst[i] = csrc[i];
		if (csrc[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
		len--;
	}
	return (NULL);
}
