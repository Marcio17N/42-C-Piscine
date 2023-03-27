/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalves- <maalves-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 21:04:37 by maalves-          #+#    #+#             */
/*   Updated: 2023/03/16 21:05:44 by maalves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	b;
	unsigned int	res;

	a = 0;
	b = 0;
	res = 0;
	while (dest[a])
		a++;
	while (src[res])
		res++;
	if (size <= a)
		res += size;
	else
		res += a;
	while (src[b] && (a + 1) < size)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (res);
}
/*
int main(void)
{
    char str1[20] = "Hello, ";
    char str2[] = "world!";
    unsigned int result;

    printf("Before concatenation:\n");
    printf("str1 = %s, length = %lu\n", str1, strlen(str1));
    printf("str2 = %s, length = %lu\n", str2, strlen(str2));

    result = ft_strlcat(str1, str2, sizeof(str1));

    printf("\nAfter concatenation:\n");
    printf("str1 = %s, length = %lu\n", str1, strlen(str1));
    printf("str2 = %s, length = %lu\n", str2, strlen(str2));
    printf("ft_strlcat returned %u\n", result);

    return 0;
}*/
