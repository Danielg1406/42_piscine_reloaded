/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-a <dgomez-a@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 17:35:29 by dgomez-a          #+#    #+#             */
/*   Updated: 2024/04/16 17:44:13 by dgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*#include <stdio.h>
int main(void)
{
	int a = 4;
	int b = 2;
	int div;
	int mod;
	ft_div_mod(a, b, &div, &mod);
	printf("division: %d, remainder: %d\n", div, mod);
	return (0);
}*/
