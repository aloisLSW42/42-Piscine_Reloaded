/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleclet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 09:35:07 by aleclet           #+#    #+#             */
/*   Updated: 2016/11/21 14:02:02 by aleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_is_error(int argc)
{
	int res;

	res = 1;
	if (argc == 1)
	{
		ft_putstr("File name missing.\n");
	}
	else if (argc > 2)
	{
		ft_putstr("Too many arguments.\n");
	}
	else
	{
		res = 0;
	}
	return (res);
}

void	ft_display_file(char *filename)
{
	int		fd;
	char	buf[1];

	fd = open(filename, O_RDONLY);
	buf[0] = 'a';
	while (read(fd, buf, 1) > 0)
	{
		ft_putchar(buf[0]);
	}
	close(fd);
}
