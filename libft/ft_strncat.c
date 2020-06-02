/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhendric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 17:25:23 by nhendric          #+#    #+#             */
/*   Updated: 2018/05/30 22:37:42 by nhendric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncat(char *dst, const char *src, size_t len)
{
	int i;
	int n;

	i = 0;
	n = 0;
	while (dst[i] != '\0')
		i++;
	while (src[n] != '\0' && len > 0)
	{
		dst[i] = src[n];
		i++;
		n++;
		len--;
	}
	dst[i] = '\0';
	return (dst);
}
