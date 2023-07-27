/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <deordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 20:48:00 by deordone          #+#    #+#             */
/*   Updated: 2023/07/11 19:04:02 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void);

void	ft_print_numbers(void)
{
	char	numero;
	int		i;

	numero = '0';
	i = 48;
	while (i < 58)
	{
		write(1, &numero, 1);
		numero = numero + 1;
		i = i + 1; 
	}
}
