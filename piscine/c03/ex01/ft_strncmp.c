/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <deordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 01:00:38 by deordone          #+#    #+#             */
/*   Updated: 2023/07/27 18:27:08 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] == s2[i])
			i++;
		else if (s1[i] > s2[i])
		{
			return (1);
			i++;
		}
		else if (s1[i] < s2[i])
		{
			return (-1);
			i++;
		}
	}
	return (0);
}
/*
int main (void)
{
	char s1[] = "holz";
	char s2[] = "hola";

	if (ft_strncmp(s1, s2, 4) == 1)
		printf("es mayor");
	else if (ft_strncmp(s1, s2, 4) == 0)
		printf("es igual");
	else if (ft_strncmp(s1, s2, 4) == -1)
		printf("es menor");
	return (0);
} */
