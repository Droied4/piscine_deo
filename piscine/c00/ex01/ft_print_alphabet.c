/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <deordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 16:45:18 by deordone          #+#    #+#             */
/*   Updated: 2023/07/14 10:26:55 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void);

void	ft_print_alphabet(void)
{
	char	letra;
	int		i;	

	i = 0;
	letra = 'a';
	while (i < 26)
	{
		write(1, &letra, 1);
		i++;
		letra++;
	}
}
