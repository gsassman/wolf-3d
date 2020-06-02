/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhendric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 18:25:56 by nhendric          #+#    #+#             */
/*   Updated: 2018/06/06 16:08:53 by nhendric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_strclr(char *s)
{
	int		i;
	int		len;
	char	*str;

	str = s;
	i = 0;
	if (!s)
		return ;
	len = ft_strlen(str);
	while (len > 0)
	{
		str[i] = '\0';
		i++;
		len--;
	}
}
