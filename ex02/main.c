/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvazquez <cvazquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 16:56:45 by cvazquez          #+#    #+#             */
/*   Updated: 2022/03/23 16:56:46 by cvazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_swap(int *a, int *b);

int main (void)
{
	int a;
	int b;

	a = 1;
	b = 2;

	printf("%d\n", a);
	printf("%d\n", b);

	ft_swap(&a, &b);
	printf("*************\n");
	printf("%d\n", a);
	printf("%d\n", b);

	return(0);
}

