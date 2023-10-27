/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:26:15 by btomlins          #+#    #+#             */
/*   Updated: 2023/10/18 15:26:39 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	handle_pixel(int x, int y, t_fractal *fractal)
{
    t_complex	z;
    t_complex	c;

    z.x = 0.0;
    z.y = 0.0;

	c.x = map(x, -2, +2, 0, WIDTH);
	c.y = map(y, +2, -2, 0, HEIGHT);

    while ()
    {
        z = sum_complex(square_complex(z), c)

        if ((z.x * z.x) + (z.y * z.y))
        {
            my_pixel_put();
            return;
        }
    }
}

void	fractal_render(t_fractal *fractal)
{
    int	x;
    int	y;

    y = -1;
    while (++y < HEIGHT)
    {
        x = -1;
        while (++x < WIDTH)
        {
            handle_pixel(x, y, fractal);
        }
    }
}
