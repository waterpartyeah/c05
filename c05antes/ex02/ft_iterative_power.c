/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oremonte <oremonte@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 20:41:15 by oremonte          #+#    #+#             */
/*   Updated: 2023/11/28 18:58:36 by oremonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	acumulado;

	if (power < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	if (nb > 1)
	{
		acumulado = 1;
		while (power >= 1)
		{
			acumulado *= nb;
			power--;
		}
	}
	return (acumulado);
}
/*
int	main(void)
{
	int base;
	int	exponente;
	int	result;

	base = 5;
	exponente = -1;
	result = ft_iterative_power(base, exponente);
	printf("%d", result);
	return (0);
}*/
