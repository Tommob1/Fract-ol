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

#include <fract-ol.h>

typedef struct	s_complex
{
	// x
	double	real;
	// y
	double	i;
}	t_complex;

int	main(void)
{
	int	i;
    
	i = 0;

	t_complex	z;
	// point
	t_complex   c;

	z.real = 0;
	z.i = 0;

	c.real = 5;
	c.i = 2;

	while (i < 42)
	{
		//z = z^2 + c

		i++;
	}
}