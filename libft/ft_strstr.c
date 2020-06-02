/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhendric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/20 00:34:29 by nhendric          #+#    #+#             */
/*   Updated: 2018/06/09 13:39:53 by nhendric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *haystack, const char *needle)
{
	const char *start;
	const char *pattern;

	if (*needle == '\0')
		return ((char*)haystack);
	while (*haystack)
	{
		start = haystack;
		pattern = needle;
		while (*pattern != '\0' && *start == *pattern)
		{
			start++;
			pattern++;
		}
		if (*pattern == '\0')
			return ((char*)haystack);
		haystack++;
	}
	return (NULL);
}
