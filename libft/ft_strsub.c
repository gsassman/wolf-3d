/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhendric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 07:39:50 by nhendric          #+#    #+#             */
/*   Updated: 2018/06/09 13:40:07 by nhendric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	int		i;

	i = 0;
	if (s)
	{
		sub = ft_strnew(len);
		if (!sub)
			return (NULL);
		while (s[start] != '\0' && len > i)
		{
			sub[i] = (s[start + i]);
			i++;
		}
		sub[i + 1] = '\0';
		return (sub);
	}
	else
		return (NULL);
}
