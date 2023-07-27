/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <deordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 19:40:45 by deordone          #+#    #+#             */
/*   Updated: 2023/07/20 22:45:13 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);

void	ft_putnumbers(char cent, char doze, char unit, char space)
{
	write(1, &cent, 1);
	write(1, &doze, 1);
	write(1, &unit, 1);
	if (!(cent == 55 && doze == 56 && unit == 57))
	{
		write(1, ", ", 2);
	}
	else
	{
		write(1, &space, 1);
	}
}

void	ft_putline(char line)
{
	write(1, &line, 1);
}

void	ft_print_comb(void)
{
	char	cent;
	char	doze;
	char	unit;

	cent = 48;
	doze = 49;
	while (cent < 55)
	{
		doze = cent + 1;
		while (doze < 56)
		{
			unit = 1 + doze;
			while (unit <= 57)
			{
				ft_putnumbers(cent, doze, unit, ',');
				unit++;
			}
			doze++;
		}
		unit = 57;
		ft_putnumbers(cent, doze, unit, ' ');
		cent++;
	}
	ft_putnumbers(cent, doze, unit, '\n');
}
int main (void)
{
	ft_print_comb();
	return (0);
}
