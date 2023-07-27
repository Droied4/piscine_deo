/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <deordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 11:05:19 by deordone          #+#    #+#             */
/*   Updated: 2023/07/13 07:51:32 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n);

void	ft_is_negative(int n)
{
	char	value;

	value = 'P';
	if (n < 0)
	{
		value = 'N';
		write (1, &value, 1);
	}
	if (n >= 0)
	{
		value = 'P';
		write (1, &value, 1);
	}
}
