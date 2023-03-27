/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalves- <maalves-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 18:53:49 by maalves-          #+#    #+#             */
/*   Updated: 2023/03/14 18:54:10 by maalves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int	main(void)
{
	int n = 1231243;	
	int *nbr = &n;
	int **nbr1 = &nbr;
	int ***nbr2 = &nbr1;
	int ****nbr3 = &nbr2;
	int *****nbr4 = &nbr3;
	int ******nbr5 = &nbr4;
	int *******nbr6 = &nbr5;
	int ********nbr7 = &nbr6;
	int *********nbr8 = &nbr7;

	ft_ultimate_ft(nbr8);
	printf("%d", n);
}
