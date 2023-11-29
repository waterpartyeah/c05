/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oremonte <oremonte@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:30:08 by oremonte          #+#    #+#             */
/*   Updated: 2023/11/28 18:51:42 by oremonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	n;
	int	acumulado;

	n = nb;
	acumulado = 1;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (n > 1)
	{
		acumulado = acumulado * (n);
		n--;
	}
	return (acumulado);
}
/*
int main (void)
{
	int resultado;

	resultado = ft_iterative_factorial(5);
	printf("%d", resultado);
	return (0);
}*/
