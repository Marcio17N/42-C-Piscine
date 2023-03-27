/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalves- <maalves-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 13:30:40 by maalves-          #+#    #+#             */
/*   Updated: 2023/03/14 09:56:57 by maalves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_combn(int n, int index, int tab[], int c_position)

{
	int	c;

	if (index == n)
	{
		c = 0;
		while (c < n)
			ft_putchar(tab[c++] + '0');
		if (tab[0] != 10 - n)
			write(1, ", ", 2);
		return ;
	}
	if (c_position == 10)
		return ;
	tab[index] = c_position;
	print_combn(n, index + 1, tab, c_position + 1);
	print_combn(n, index, tab, c_position + 1);
}

void	ft_print_combn(int n)
{
	int	tab[10];

	if (n < 1 || n > 9)
		return ;
	print_combn(n, 0, tab, 0);
}
/*
int	main(void)
{
	ft_print_combn(2);
}*/
