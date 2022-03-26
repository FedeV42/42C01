/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvazquez <cvazquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 14:56:43 by cvazquez          #+#    #+#             */
/*   Updated: 2022/03/26 14:57:02 by cvazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	k;
	int	aux;
	int	max;

	max = -2147483648;
	while (k < 2147483647 && max != tab[size - 1])
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
}
