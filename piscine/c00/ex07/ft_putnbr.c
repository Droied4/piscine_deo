/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <deordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:02:31 by deordone          #+#    #+#             */
/*   Updated: 2023/07/11 19:08:23 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

void	ft_putchar(char c_nb)
{
	write(1, &c_nb, 1);
}

void	ft_putnbr(int nb)
{
	char	c_nb;

	c_nb = '0';
	if (nb >= 0 && nb <= 9)
	{
		ft_putchar(c_nb + nb % 10);
	}
	if (nb >= 10 && nb <= 2147483647)
	{
		ft_putchar(c_nb + nb / 10);
		ft_putchar(c_nb + nb % 10);
	}
}
