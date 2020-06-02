/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhendric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 16:31:27 by nhendric          #+#    #+#             */
/*   Updated: 2018/06/07 09:49:13 by nhendric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *str, int c)
{
	int len;

	len = ft_strlen(str);
	while (str[len] != str[0])
	{
		if (str[len] == (char)c)
			return ((char *)str + len);
		len--;
	}
	if (str[0] == (char)c)
		return ((char *)str + len);
	return (NULL);
}
