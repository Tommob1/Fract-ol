/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fract-ol.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 15:29:29 by btomlins          #+#    #+#             */
/*   Updated: 2023/09/04 15:32:13 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fract_ol.h"

// Real = X Axis
// i = Y Axis
typedef struct s_complex
{
	double	real;
	double	i;
}	t_complex;

// General Formula: z = z^2 + c
int	main(void)
{
	t_complex	z;
	t_complex	c;
	double		tmp_real;
	int			i;

	i = 0;
	z.real = 0;
	z.i = 0;
	c.real = 5;
	c.i = 2;
	while (i < 42)
	{
		tmp_real = (z.real * z.real) - (z.i * z.i);
		z.i = 2 * z.real * z.i;
		z.real = tmp_real;

		z.real += c.real;
		z.i += c.i;
		//MAKE NORMAL PRINTF FOR TESTING
		ft_printf("iteration n -> %d real %f imaginary%f/n", i, z.real, z.i);
		++i;
	}
}
