/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <deordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 03:12:29 by deordone          #+#    #+#             */
/*   Updated: 2023/07/27 18:26:39 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_countl_dest(char *dest)
{
	unsigned int	l_dest;

	l_dest = 0;
	while (dest[l_dest] != '\0')
	{
		l_dest++;
	}
	return (l_dest);
}

unsigned int	ft_countl_src(char *src)
{
	unsigned int	l_src;

	l_src = 0;
	while (src[l_src] != '\0')
	{
		l_src++;
	}
	return (l_src);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	l_dest;
	unsigned int	l_src;
	unsigned int	avail;
	unsigned int	i;

	l_dest = ft_countl_dest(dest);
	l_src = ft_countl_src(src);
	i = 0;
	avail = size - l_dest - 1;
	if (avail <= 0)
	{
		return (l_dest + l_src);
	}
	while (src[i] != '\0' && i < avail)
	{
		dest[l_dest + i] = src[i];
		i++;
	}
	dest[l_dest + i] = '\0';
	return (l_dest + l_src);
}
/*
int main (void)
{
	char dest[20] = "hello";
	char src[] = " world!";
	unsigned int dest_size= sizeof(dest);
	unsigned int result = ft_strlcat(dest, src, dest_size);
	printf("result : %zu\n", result);
	printf("concatenado el string : %s\n", dest);

	return (0);
}*/
