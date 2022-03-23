/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvazquez <cvazquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 16:57:23 by cvazquez          #+#    #+#             */
/*   Updated: 2022/03/23 16:57:24 by cvazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_div_mod (int a, int b, int *div, int *mod);

int main (void)
{
	int a;
	int b;
	int x;
	int y;
	int *div;
	int *mod;


	a = 6;
	b = 3;
	div = &x;
	mod = &y;


	ft_div_mod(a, b, div, mod);

	printf("*************\n");
	
	printf("%d\n", x);
	printf("%d\n", y);

	return(0);
}

