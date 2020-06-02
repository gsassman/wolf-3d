/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wolf3d.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhendric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 14:22:03 by nhendric          #+#    #+#             */
/*   Updated: 2018/09/17 13:59:24 by nhendric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WOLF3D_H
# define WOLF3D_H

# include <math.h>
# include <mlx.h>
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

# define BUFF_SIZE 1028
# define WIDTH 1028
# define HEIGHT 720

typedef struct	s_env
{
	void		*mlx;
	void		*win;
	void		*img_ptr;
	char		**map;
	int			**arr;
	int			*data;
	int			size_l;
	int			bpp;
	int			endian;
	int			*data2;
	int			size_l2;
	int			bpp2;
	int			endian2;
	int			step_x;
	int			step_y;
	int			line_color;
	int			mapwidth;
	int			mapheight;
	int			x;
	int			y;
	double		h;
	double		w;
	double		movespeed;
	double		rotspeed;
	double		posx;
	double		posy;
	double		dirx;
	double		diry;
	double		planex;
	double		planey;
	double		camerax;
	double		raydirx;
	double		raydiry;
	int			mapx;
	int			mapy;
	double		sidedistx;
	double		sidedisty;
	double		deltadistx;
	double		deltadisty;
	double		perpwalldist;
	int			stepx;
	int			stepy;
	int			hit;
	int			side;
	int			lineheight;
	int			drawstart;
	int			drawend;
	int			worldmap;
	char		*file;
}				t_env;

void			render(t_env *z);
int				expose_hook(t_env *z);
void			turnright(t_env *z);
void			turnleft(t_env *z);
void			movedown(t_env *z);
void			moveup(t_env *z);
void			colour_pick(t_env *z);
int				num_digits(char *line);
char			**read_map(char *filename);
int				**convert(char **map, char *filename);
int				ft_strlen(const char *str);
int				ft_atoi(const char *str);
char			**ft_strsplit(const char *s, char c);
int				ft_intlen(int nbr);
int				get_next_line(const int fd, char **line);
int				ft_isdigit(int c);
char			*ft_strncpy(char *dst, const char *src, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strnew(size_t size);
char			*ft_strsub(char const *s, unsigned int start, size_t len);
char			*ft_strcat(char *s1, const char *s2);
void			ft_bzero(void *s, size_t i);
char			*ft_strcpy(char *dst, const char *src);
void			*ft_memset(void *str, char c, size_t n);

#endif
