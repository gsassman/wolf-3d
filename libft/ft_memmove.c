/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhendric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 14:01:49 by nhendric          #+#    #+#             */
/*   Updated: 2018/06/09 16:42:05 by nhendric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*csrc;
	unsigned char	*cdst;

	csrc = ((unsigned char *)src);
	cdst = ((unsigned char *)dst);
	if (cdst > csrc)
	{
		while (len)
		{
			len--;
			cdst[len] = csrc[len];
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
