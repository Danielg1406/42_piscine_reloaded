/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-a <dgomez-a@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 11:04:28 by dgomez-a          #+#    #+#             */
/*   Updated: 2024/04/19 17:46:08 by dgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	read_file(char **argv)
{
	char	buf[BUF_SIZE];
	int		fd;
	ssize_t	rd;

	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
		return (1);
	rd = 1;
	while (rd > 0)
	{
		rd = read(fd, buf, 1);
		if (rd < 0)
			return (1);
		if (rd > 0)
			ft_putchar(buf[0], 1);
	}
	rd = close(fd);
	if (rd < 0)
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		ft_putstr("File name missing.\n", 2);
		return (1);
	}
	else if (argc > 2)
	{
		ft_putstr("Too many arguments.\n", 2);
		return (1);
	}
	else
	{
		if (read_file(argv) == 0)
			return (0);
		else
		{
			ft_putstr("Cannot read file.\n", 2);
			return (1);
		}
	}
	return (0);
}
