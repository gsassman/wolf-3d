/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhendric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 20:28:20 by nhendric          #+#    #+#             */
/*   Updated: 2018/06/07 22:48:04 by nhendric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int				i;
	int				j;
	unsigned int	srclen;
	unsigned int	dstlen;

	j = 0;
	srclen = ft_strlen((char *)src);
	dstlen = ft_strlen(dst);
	i = dstlen;
	if (dstsize < dstlen + 1)
		return (srclen + dstsize);
	while (i < (dstsize - 1))
		*(dst + i++) = *(src + j++);
	*(dst + i) = '\0';
	return (dstlen + srclen);
}
