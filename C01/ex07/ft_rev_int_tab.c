/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalves- <maalves-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 19:03:28 by maalves-          #+#    #+#             */
/*   Updated: 2023/03/14 19:03:36 by maalves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	v;
	int	temp;

	v = 0;
	while (v < (size / 2))
	{
		temp = tab[v];
		tab[v] = tab[size - 1 - v];
		tab[size - 1 - v] = temp;
		v++;
	}
}

/*int	main(void)
{
	int tab[5] = {1, 2, 3, 4, 5};
	int size = 5;
	
	ft_rev_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4]);
}*/
