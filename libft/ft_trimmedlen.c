/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trimmedlen.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhendric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 09:50:04 by nhendric          #+#    #+#             */
/*   Updated: 2018/06/09 21:19:51 by nhendric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_trimmedlen(char *s)
{
	int i;
	int len;

	i = 0;
	len = ft_strlen(s);
	while (ft_iswhitespace(s[len] == 1))
		len--;
	while (ft_iswhitespace(s[i]) == 1)
	{
		i++;
		len--;
	}
	return (len);
}
