/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 17:31:18 by gd-auria          #+#    #+#             */
/*   Updated: 2023/12/13 02:02:07 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		cpy_a;
	int		cpy_b;

	cpy_a = *a;
	cpy_b = *b;
	*a = cpy_a / cpy_b;
	*b = cpy_a % cpy_b;
}
