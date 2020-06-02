/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhendric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 15:17:42 by nhendric          #+#    #+#             */
/*   Updated: 2018/06/04 21:01:53 by nhendric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *src, int c)
{
	int		i;
	char	chr;

	i = 0;
	chr = c;
	while (src[i] != '\0')
	{
		if (src[i] == chr)
		{
			return (char *)(src + i);
		}
		i++;
	}
	if (src[i] == chr)
		return ((char *)(src + i));
	return (NULL);
}
