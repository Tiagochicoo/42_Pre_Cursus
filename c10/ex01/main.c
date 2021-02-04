/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 18:40:31 by tpereira          #+#    #+#             */
/*   Updated: 2021/02/04 19:06:46 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>
#include <libgen.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_show_file(int fd)
{
	char buffer;

	while (read(fd, &buffer, 1))
	{
		write(1, &buffer, 1);
	}
}

void	ft_print_error(char *prog_name, char *file_name, int is_dir)
{
	ft_putstr(basename(prog_name));
	ft_putstr(": ");
	ft_putstr(file_name);
	ft_putstr(": ");
	if(is_dir)
	{
		ft_putstr("Is a directory");
	}
	else
	{
		ft_putstr(strerror(errno));
	}
	ft_putstr("\n");
}

void	ft_read_input(void)
{
	char buffer;

	while (read(0, &buffer, 1))
	{
		write(1, &buffer, 1);
	}
}

int		main(int argc, char **argv)
{
	int	fd;
	int	i;

	i = 0;
	if (argc == 1)
	{
		ft_read_input();
	}
	while (i < argc)
	{
		errno = 0;
		if (argv[i][0] == '-' && argv[i][1] == '\0')
		{
			ft_read_input();
		}
		else if ((fd = open(argv[i], O_DIRECTORY)) == -1)
		{
			if ((fd = open(argv[i], O_RDONLY)) == -1)
			{
				ft_print_error(argv[0], argv[i], 0);
			}
			else
			{
				ft_show_file(fd);
			}
		}
		else
		{
			ft_print_error(argv[0], argv[i], 1);
		}
		i++;
	}
	return (0);
}
