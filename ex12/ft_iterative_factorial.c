/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-a <dgomez-a@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 17:45:36 by dgomez-a          #+#    #+#             */
/*   Updated: 2024/04/16 17:56:36 by dgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	factorial;

	factorial = 1;
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		factorial *= nb;
		nb--;
	}
	return (factorial);
}

/*#include <stdio.h>
int main()
{
	printf("the factorial is: %d\n", ft_iterative_factorial(13));
	return (0);
}*/
