/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-a <dgomez-a@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 11:14:15 by dgomez-a          #+#    #+#             */
/*   Updated: 2024/04/19 11:16:45 by dgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c, int std)
{
	write(std, &c, 1);
}

void	ft_putstr(char *str, int std)
{
	while (*str != '\0')
	{
		ft_putchar(*str, std);
		str++;
	}
}
