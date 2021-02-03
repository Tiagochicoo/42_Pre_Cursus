/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 21:28:14 by tpereira          #+#    #+#             */
/*   Updated: 2021/02/03 22:12:56 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_display_file(int fd)
{
	char *buff;

	while (read(fd, &buff, 1))
	{
		write(1, &buff, 1);
	}
}

int		main(int argc, char **argv)
{
	int	fd;

	if (argc < 2)
	{
		write(2, "File name missing.", 19);
	}
	else if (argc > 2)
	{
		write(2, "Too many arguments.", 20);
	}
	else
	{
		if ((fd = open(argv[1], O_RDONLY)) == -1)
		{
			write(2, "Cannot read file.", 18);
		}
		else
		{
			ft_display_file(fd);
		}
	}
	return (0);
}
