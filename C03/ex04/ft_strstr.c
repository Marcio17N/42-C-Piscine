/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalves- <maalves-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 17:22:19 by maalves-          #+#    #+#             */
/*   Updated: 2023/03/16 21:07:26 by maalves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] != '\0' && str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			++j;
		}
		++i;
	}
	return (0);
}
/*
int main(void)
{
    char str1[] = "Hello, world!";
    char to_find1[] = "world";
    char str2[] = "Hello, world!";
    char to_find2[] = "";
    char str3[] = "Hello, world!";
    char to_find3[] = "hello";
    char str4[] = "hey";
    char to_find4[] = "how are u";
    char str5[] = "Hello, world!";
    char to_find5[] = "rld";

    printf("ft_strstr(\"%s\", \"%s\") = %s\n", str1, 
		    to_find1, ft_strstr(str1, to_find1));
    printf("ft_strstr(\"%s\", \"%s\") = %s\n", str2, 
		    to_find2, ft_strstr(str2, to_find2));
    printf("ft_strstr(\"%s\", \"%s\") = %s\n", str3, 
		    to_find3, ft_strstr(str3, to_find3));
    printf("ft_strstr(\"%s\", \"%s\") = %s\n", str4, 
		    to_find4, ft_strstr(str4, to_find4));
    printf("ft_strstr(\"%s\", \"%s\") = %s\n", str5, 
		    to_find5, ft_strstr(str5, to_find5));

    return 0;
}*/
