/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalves- <maalves-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 16:47:14 by maalves-          #+#    #+#             */
/*   Updated: 2023/03/13 14:50:24 by maalves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	print_reverse(int i, char *c)
{
	while (i >= 0)
	{
		write(1, c + i, 1);
		i--;
	}
}

void	ft_putnbr(int nb)
{
	int		i;
	char	c[10];

	i = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	while (nb > 0 || i == 0)
	{
		c[i] = nb % 10 + '0';
		i++;
		nb = nb / 10;
	}
	print_reverse(i - 1, c);
}
/*
int     main(void)
{
        ft_putnbr(-2147483648);
}*/
