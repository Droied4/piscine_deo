/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <deordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 02:13:36 by deordone          #+#    #+#             */
/*   Updated: 2023/07/27 18:30:46 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	n;

	i = 0;
	n = 0;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n < nb)
	{
		if (n < nb)
		{
			*dest = *src;
			dest++;
			src++;
			n++;
		}
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main(void)
{
	char src[] = "adios";
	char dest[] = "hola";

	ft_strncat(dest, src, 3);
	printf("la palabra es : %s\n", dest);
	return (0);
}*/
