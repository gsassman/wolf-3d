/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhendric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 18:41:30 by nhendric          #+#    #+#             */
/*   Updated: 2018/08/07 15:38:54 by nhendric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/get_next_line.h"

static int		ft_read(const int fd, char **string)
{
	char	buffer[BUFF_SIZE + 1];
	char	*holder;
	int		res;

	res = read(fd, buffer, BUFF_SIZE);
	if (res < 0)
		return (-1);
	buffer[res] = '\0';
	holder = *string;
	*string = ft_strjoin(*string, buffer);
	free(holder);
	return (res);
}

int				get_next_line(const int fd, char **line)
{
	static char		*string;
	char			*end;
	char			*holder;
	int				len;

	if (!string)
		string = (char *)malloc(sizeof(char) * BUFF_SIZE + 1);
	if (fd < 0 || !line || read(fd, string, 0 < 0))
		return (-1);
	while (!(end = ft_strchr(string, '\n')))
	{
		len = ft_read(fd, &string);
		if (len == 0 && ft_strlen(string) == 0)
			return (0);
		if (len == 0)
			string = ft_strjoin(string, "\n");
	}
	*line = ft_strsub(string, 0, ft_strlen(string) - ft_strlen(end));
	holder = string;
	if (end != '\0' && (end + 1) != '\0')
		string = ft_strdup(end + 1);
	else
		string = (NULL);
	free(holder);
	return (1);
}
