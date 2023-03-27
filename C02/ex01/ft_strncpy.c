/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalves- <maalves-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 16:19:16 by maalves-          #+#    #+#             */
/*   Updated: 2023/03/15 16:19:21 by maalves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (src[i] && (unsigned)i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while ((unsigned)i < n)
	{
		dest [i] = '\0';
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	*dest;
	char	*src;
	char	n;
	
	n = 3;
	src = "oi galera";
	dest = malloc(strlen(src) +1);
	ft_strncpy(dest, src, n);
	printf("%s\n", src);
	printf("%s\n", dest);
	free(dest);
	return (0);
}*/
