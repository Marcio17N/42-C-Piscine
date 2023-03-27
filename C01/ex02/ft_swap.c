/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalves- <maalves-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 18:55:18 by maalves-          #+#    #+#             */
/*   Updated: 2023/03/14 18:55:26 by maalves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(void)
{
int x = 5, y = 10;
printf("Before ft_swap: x = %d, y = %d\n", x, y);
ft_swap(&x, &y);
printf("After ft_swap: x = %d, y = %d\n", x, y);
}
