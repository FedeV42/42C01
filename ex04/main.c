/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvazquez <cvazquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 16:57:42 by cvazquez          #+#    #+#             */
/*   Updated: 2022/03/23 16:57:43 by cvazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main (void)
{
	int *a;
	int *b;
	int x;
	int y;

	a = &x;
    b = &y;	
	x = 6;
	y = 3;
	


	ft_ultimate_div_mod(a, b);

	printf("*************\n");
	
	printf("%d\n", *a);
	printf("%d\n", *b);

	return(0);
}

