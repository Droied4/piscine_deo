/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <deordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 03:07:22 by deordone          #+#    #+#             */
/*   Updated: 2023/07/27 18:27:25 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_counter(char *to_find)
{
	int	count;

	count = 0;
	while (*to_find != '\0')
	{
		to_find++;
		count++;
	}
	return (count);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		counter;
	char	*recover;

	recover = to_find;
	counter = ft_counter(to_find);
	if (*to_find == '\0')
	{
		return (str);
	}
	while (*str != '\0')
	{
		if (*str != *to_find)
			to_find = recover;
		else
			to_find++;
		if (*to_find == '\0')
			return (str - counter);
		str++;
	}
	return (NULL);
}
/*int main (void)
{
	char str[25] = "Hola, mundo llegoaqui";
   char to_find[10] = "mundo";
   int *result;
   int *error = 0;

   result = ft_strstr(str, to_find);

   if (result != error) {
      printf("palabra '%s' esta en la posición %s.\n", to_find, result);
   } else {
      printf("La palabra '%s' no fue encontrada.\n", to_find);
   }

   return (0);
}*/
