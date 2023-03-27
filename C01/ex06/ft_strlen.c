/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalves- <maalves-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 19:02:14 by maalves-          #+#    #+#             */
/*   Updated: 2023/03/14 19:02:21 by maalves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char	*str)
{
	int	v;

	v = 0;
	while (str[v] != '\0')
	{
		v++;
	}
	return (v);
}

int	main(void)
{    
    char str[] = "Hello, world!";
    printf("%d", ft_strlen(str));
}
