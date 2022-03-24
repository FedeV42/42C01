/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvazquez <cvazquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 10:23:04 by cvazquez          #+#    #+#             */
/*   Updated: 2022/03/24 10:45:36 by cvazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	char	*pointer;
	int		counter;

	pointer = str;
	counter = 0;
	while (*pointer != '\0')
	{
		counter++;
		pointer++;
	}
	printf("%d", counter);
	return (counter);
}
