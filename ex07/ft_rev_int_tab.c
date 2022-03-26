/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvazquez <cvazquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 19:52:32 by cvazquez          #+#    #+#             */
/*   Updated: 2022/03/25 14:06:08 by cvazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	vector[size];
	int	aux;
	int	i;
	int	j;

	i = 1;
	while (i <= size)
	{
		aux = tab[i - 1];
		vector[size - i] = aux;
		i++;
	}
	j = 0;
	while (j < size)
	{
		ft_putchar(vector[j] + '0');
		j++;
	}
}
