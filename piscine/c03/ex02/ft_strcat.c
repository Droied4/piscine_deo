/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <deordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 01:25:29 by deordone          #+#    #+#             */
/*   Updated: 2023/07/27 18:27:13 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	z;

	i = 0;
	z = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[z] != '\0')
	{
		dest[i + z] = src[z];
		z++;
	}
	dest[i + z] = '\0';
	return (dest);
}
/*
int main (void)
{
	char dest[100] = "I love ";
	char src[] = "coding";
	
	ft_strcat(dest, src);
	printf("%s", dest);
	return (0);
} */
