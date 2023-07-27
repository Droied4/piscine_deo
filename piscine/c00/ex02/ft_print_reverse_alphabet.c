/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <deordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 18:26:40 by deordone          #+#    #+#             */
/*   Updated: 2023/07/12 20:34:44 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void);

void	ft_print_reverse_alphabet(void)
{
	char	letra;
	int		i;

	letra = 'z';
	i = 26;
	while (0 < i)
	{
		write(1, &letra, 1); 
		letra = letra - 1;
		i = i - 1;
	}
}
