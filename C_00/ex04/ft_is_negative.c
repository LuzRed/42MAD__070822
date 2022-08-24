/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciudad <lciudad@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 02:30:19 by lciudad           #+#    #+#             */
/*   Updated: 2022/08/23 13:51:24 by lciudad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		write (1, "P\n", 2);
	}
	else
	{
		write(1, "N", 1);
	}
}
/*
int main()
{
	int n = 4;
	
	ft_is_negative(n);
}
*/
