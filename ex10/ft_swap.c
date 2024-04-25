/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-a <dgomez-a@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 17:28:13 by dgomez-a          #+#    #+#             */
/*   Updated: 2024/04/16 17:34:33 by dgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*#include <stdio.h>
int	main(void)
{
	int a = 0;
	int b = 1;

	ft_swap(&a, &b);
	printf("the new value of a is: %d and b is: %d\n", a, b);
	return (0);
}*/
