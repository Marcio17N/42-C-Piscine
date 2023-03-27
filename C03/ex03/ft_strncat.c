/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalves- <maalves-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 15:44:58 by maalves-          #+#    #+#             */
/*   Updated: 2023/03/16 17:14:17 by maalves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	j;

	i = 0;
	while (dest[i])
	{
	i++;
	}
	j = 0;
	while (src[j] && j < nb)
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int    main(void)
{
    char dest[11] = "Hello ";
    char *src = "world!";
    unsigned int nb = 5;

    printf("Before ft_strncat: %s\n", dest);
    ft_strncat(dest, src, nb);
    printf("After ft_strncat: %s\n", dest);
}*/
