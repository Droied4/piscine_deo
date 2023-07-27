/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <deordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 17:11:05 by deordone          #+#    #+#             */
/*   Updated: 2023/07/20 22:44:01 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	numa;
	int	numb;

	numa = 0;
	numb = 0;
	while (numa <= 99) 
	{
		numb = numa + 1;
		while (numb <= 99)
		{
			ft_putchar('0' + numa / 10);
			ft_putchar('0' + numa % 10);
			ft_putchar(' ');
			ft_putchar('0' + numb / 10);
			ft_putchar('0' + numb % 10);
			if (!(numa == 98 && numb == 99))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			numb++;
		}
		numa++;
	}
}
int main (void)
{
	ft_print_comb2();
	return (0);
}
