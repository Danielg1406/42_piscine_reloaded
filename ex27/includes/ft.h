/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-a <dgomez-a@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 17:35:49 by dgomez-a          #+#    #+#             */
/*   Updated: 2024/04/19 15:23:53 by dgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# define BUF_SIZE 4096

# include <unistd.h>
# include <fcntl.h>

void	ft_putchar(char c, int std);
void	ft_putstr(char *str, int std);

#endif
