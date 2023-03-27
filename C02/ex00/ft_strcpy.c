/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalves- <maalves-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 16:17:59 by maalves-          #+#    #+#             */
/*   Updated: 2023/03/15 16:18:05 by maalves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0'
	
	return (dest);
	
}

int	main(void)
{
char	*src;
char	*dest;

src = "Ola galerinha do youtube";
dest = calloc(27, sizeof(char));
ft_strcpy(dest, src);
printf("src: %s\n", src);
printf("dest: %s\n", dest);
return (0);
}
