/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvazquez <cvazquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 16:40:19 by cvazquez          #+#    #+#             */
/*   Updated: 2022/03/23 21:21:08 by cvazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putstr(char *str);

int main (void)
{
	char cadena[] = "Hola Mundo";
	char *str = cadena;
	ft_putstr(str);
	return(0);
}

