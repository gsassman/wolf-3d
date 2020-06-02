/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhendric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 07:54:13 by nhendric          #+#    #+#             */
/*   Updated: 2018/08/07 15:46:28 by nhendric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include "get_next_line.h"

int			get_next_line(const int fd, char **line);
int			ft_trimmedlen(char *s);
int			ft_delimstrlen(char *str, char c, int i);
int			ft_wordcount(char *s, char c);
int			ft_iswhitespace(char c);
int			ft_isupper(int c);
int			ft_islower(int c);
int			ft_atoi(const char *str);
int			ft_isascii(int c);
int			ft_isalpha(int str);
int			ft_isalnum(int c);
void		ft_bzero(void *s, size_t i);
void		*ft_memchr(const void *s, int c, size_t n);
void		*ft_memalloc(size_t size);
int			ft_isprint(int c);
int			ft_isdigit(int c);
void		*ft_memset(void *dst, int c, size_t len);
void		*ft_memmove(void *dst, const void *src, size_t len);
void		ft_memdel(void **ap);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_memccpy(void *dst, const void *src, int c, size_t n);
int			ft_strequ(const char *s1, const char *s2);
char		*ft_strcpy(char *dst, const char *src);
int			ft_strnequ(const char *s1, const char *s2, size_t n);
char		*ft_itoa(int n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
void		ft_putnbr(int n);
void		ft_putnbr_fd(int n, int fd);
void		ft_putstr_fd(char const *str, int fd);
void		ft_putendl_fd(char const *str, int fd);
void		ft_putendl(const char *str);
void		ft_putchar(char c);
void		ft_putchar_fd(char c, int fd);
void		ft_strdel(char **as);
void		ft_strclr(char *s);
char		*ft_strsub(const char *s, unsigned int start, size_t len);
char		*ft_strchr(const char *str, int c);
char		*ft_strcat(char *s1, const char *s2);
void		ft_putstr(const char *str);
size_t		ft_strlen(const char *str);
char		*ft_strmap(const char *s, char (*f) (char));
char		*ft_strmapi(const char*s, char (*f)(unsigned int, char));
char		*ft_strtrim(const char *s);
char		**ft_strsplit(const char *s, char c);
size_t		ft_strlcat(char *dst, const char *src, size_t size);
void		ft_striteri(char *s, void (*f)(unsigned int, char *));
void		ft_striter(char *s, void (*f)(char *));
char		*ft_strdup(const char *s1);
char		*ft_strnstr(const char *haystack, const char *needle,
			size_t len);
char		*ft_strnew(size_t size);
char		*ft_strncpy(char *dst, const char *src, size_t len);
int			ft_strcmp(const char *s1, const char *s2);
int			ft_strncmp(const char *s1, const char *s2, size_t len);
char		*ft_strncat(char *s1, const char *s2, size_t n);
int			ft_tolower(int c);
int			ft_toupper(int c);
char		*ft_strjoin(const char *str1, const char *str2);
char		*ft_strstr(const char *s1, const char *s2);
char		*ft_strrchr(const char *s, int c);
#endif
