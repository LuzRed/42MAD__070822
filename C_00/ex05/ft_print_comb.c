/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciudad <lciudad@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 02:59:42 by lciudad           #+#    #+#             */
/*   Updated: 2022/08/23 03:06:26 by lciudad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);

void	ft_putchar(char c)
{
	write(1, & c, 1);
}

void	ft_string(char num1, char num2, char num3)
{
	ft_putchar(num1);
	ft_putchar(num2);
	ft_putchar(num3);
	if (num1 != '7' | num2 != '8' | num3 != '9')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int	num1;
	int	num2;
	int	num3;

	num1 = '0';
	num2 = '1';
	num3 = '2';
	while (num1 <= '7')
	{
		while (num2 <= '8')
		{
			while (num3 <= '9')
			{
				ft_string(num1, num2, num3);
				num3 = num3 + 1;
			}
			num2 = num2 + 1;
			num3 = num2 + 1;
		}
		num1 = num1 + 1;
		num2 = num1 + 1;
		num3 = num2 + 1;
	}
}
/*
int	main(void)
{
	ft_print_comb();
}
*/
