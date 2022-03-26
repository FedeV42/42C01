/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvazquez <cvazquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 14:56:43 by cvazquez          #+#    #+#             */
/*   Updated: 2022/03/26 16:55:24 by cvazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	k;
	int	aux;
	int	max;
	int j;

	max = -2147483648;
	while ( max != tab[size - 1] && k < 2147483647)
	{
		i = 0;
		while (i < size)
		{
			if (tab[i] > tab[i + 1])
			{
				aux = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = aux;
				max = aux;
			}
			i++;
		}
		k++;
	}
	
	j = 0;
	
	while( j < size )
	{
		printf("%d ", tab[j]);
		j++;
	}
}
