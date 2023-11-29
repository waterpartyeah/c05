/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oremonte <oremonte@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 21:51:44 by oremonte          #+#    #+#             */
/*   Updated: 2023/11/28 19:13:59 by oremonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	acumulado;

	if (power < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	acumulado = 1;
	if (power >= 1)
		acumulado *= nb * ft_recursive_power(nb, power - 1);
	return (acumulado);
}
/*
int	main(void)
{
	int base;
	int	exponente;
	int	result;

	base = 5;
	exponente = 5;
	result = ft_recursive_power(base, exponente);
	printf("%d", result);
	return (0);
}*/
