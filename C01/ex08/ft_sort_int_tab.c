/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalves- <maalves-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 19:04:47 by maalves-          #+#    #+#             */
/*   Updated: 2023/03/14 19:04:52 by maalves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	v;
	int	temp;

	i = 0;
	v = 0;
	while (i < size)
	{
		while (v < size)
		{
			if (tab[i] > tab[v])
			{
				temp = tab[i];
				tab[i] = tab[v];
				tab[v] = temp;
			}
			v++;
		}
		i++;
		v = i + 1;
	}
}

/*int	main(void)
{
	int tab[5] = {1, 6, 3, 8, 2};
	int size = 5;
	
	ft_sort_int_tab(tab, size);

	printf("%d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4]);
}*/
