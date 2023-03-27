/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalves- <maalves-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 19:00:46 by maalves-          #+#    #+#             */
/*   Updated: 2023/03/14 19:00:53 by maalves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	int	v;

	v = 0;
	while (str[v] != '\0')
	{
		write(1, &str[v], 1);
		v++;
	}
}

int	main(void)
{    
    char str[] = "Hello, world!";
    ft_putstr(str);
}
