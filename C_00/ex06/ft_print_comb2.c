/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciudad <lciudad@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 12:37:27 by lciudad           #+#    #+#             */
/*   Updated: 2022/08/23 13:47:42 by lciudad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char n)
{
	write(1, &n, 1);
}

void	ft_print_comb2(void)
{
	int	f;
	int	s;

	f = 0;
	s = 0;
	while (f <= 98)
	{
		s = f + 1;
		while (s <= 99)
		{
			ft_putchar((f / 10) + '0');
			ft_putchar((f % 10) + '0');
			write(1, " ", 1);
			ft_putchar((s / 10) + '0');
			ft_putchar((s % 10) + '0');
			if (f != 98 || s != 99)
			{
				write(1, ", ", 2);
			}
			s++;
		}
		f++;
	}
}
/*
int main()
{
	ft_print_comb2();
}
*/
