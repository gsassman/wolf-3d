/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhendric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 15:24:45 by nhendric          #+#    #+#             */
/*   Updated: 2018/06/04 14:15:02 by nhendric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memchr(const void *src, int c, size_t n)
{
	unsigned char	chr;
	unsigned char	*str;

	str = (unsigned char *)src;
	chr = (unsigned char)c;
	while (n--)
	{
		if (*str++ == chr)
		{
			return ((void *)str - 1);
		}
	}
	return (NULL);
}
