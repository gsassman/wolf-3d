/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhendric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 12:49:40 by nhendric          #+#    #+#             */
/*   Updated: 2018/06/07 20:43:23 by nhendric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_strsplit(char const *s, char c)
{
	char	**str;
	int		words;
	int		i;
	int		j;

	i = 0;
	if (!s || !c)
		return (NULL);
	words = ft_wordcount((char*)s, c);
	if (!(str = (char **)malloc(sizeof(char *) * (words + 1))))
		return (NULL);
	words = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (s[i] == c && s[i] != '\0')
			i++;
		while (s[i] != c && s[i] != '\0' && ++j)
			i++;
		if (s[i - 1] != c)
			str[words++] = ft_strsub(s, i - j, j);
	}
	str[words] = NULL;
	return (str);
}
