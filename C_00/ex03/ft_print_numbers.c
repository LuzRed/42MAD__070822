/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciudad <lciudad@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 01:09:37 by lciudad           #+#    #+#             */
/*   Updated: 2022/08/23 19:46:39 by lciudad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	nrs;

	nrs = '0';
	while (nrs <= '9')
	{
		write (1, &nrs, 1);
		nrs++;
	}
}
/*
int main(void)
{
	ft_print_numbers();
	return (0);
}
*/
