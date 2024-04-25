/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-a <dgomez-a@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 12:11:11 by dgomez-a          #+#    #+#             */
/*   Updated: 2024/04/18 12:24:00 by dgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	if (min >= max)
		return (NULL);
	range = ((int *)malloc((max - min) * sizeof(int)));
	if (range == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}

/*#include <stdio.h>
int main()
{
	int i = 0;
	int *range;
	int min = 0;
	int max = 4;

	range = ft_range(min, max);
	while (i < (max-min))
	{
		printf("%d ", range[i]);
		i++;
	}
	free (range);
	return (0);
}*/
