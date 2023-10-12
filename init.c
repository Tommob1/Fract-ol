/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:48:22 by btomlins          #+#    #+#             */
/*   Updated: 2023/10/12 15:48:25 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void    fractal_init(t_fractal *fractal)
{
    fractal->mlx_connection = mlx_init();
    if (fractal->mlx_connection == NULL)
        malloc_error();
    fractal->mlx_window = mlx_new_window(fractal->mlx_connection,
                                        WIDTH,
                                        HEIGHT, 
                                        fractal->name);
}