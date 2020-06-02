/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wolf.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhendric <nhendric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 08:10:42 by nhendric          #+#    #+#             */
/*   Updated: 2020/02/07 19:54:20 by nhendric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WOLF_H
# define WOLF_H

# define WIN_H 480
# define WIN_W 720

# include <mlx.h>
# include <fcntl.h>
# include <math.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "../libft/includes/libft.h"

typedef	struct	s_ixy
{
	int			x;
	int			y;
}				t_ixy;

typedef	struct	s_dxy
{
	double		x;
	double		y;
}				t_dxy;

typedef struct	s_hero
{
	t_ixy		*ray_cel;
	t_dxy		*ray_dir;
	t_dxy		*pos;
	t_dxy		*dir;
	t_dxy		*cam;
	t_dxy		*sideDist;
	t_dxy		*deltaDist;
	t_ixy		*step;
	t_dxy		*plane;


	int			hit;
	int			lineheight;
	int			drawStart;
	int			drawEnd;

	double		perpwalldist;
	double		moveSpeed;
	double		rotSpeed;

}				t_hero;

typedef	struct	s_proc
{
	int			**atoi_int;
	char		***spl_str;
	char		**in_str;
}				t_proc;

typedef	struct	s_data
{
	int			map_h;
	int			map_w;
	void		*mlx;
	void		*win;
	void		*img;
	int			*img_data;
	int			size_l;
	int			endian;
	int			bpp;

	char		*map_name;
	t_hero		*hero;
	t_proc		*in_proc;
}				t_data;

int				main_loop(t_data *in);
int				init(t_data *in);
void			finish(t_data *in);
int				raycast(t_data *in);


int				cam_init(t_data *in);
int				pos_init(t_data *in);
int				map_print(t_data *in);
int				map_validate(t_data *in);
int				i_store(t_data *in);
int				line_w(t_data *in);
void				map_read(t_data *in);
int				press(int key);
float			abs_val(float val);

#endif
