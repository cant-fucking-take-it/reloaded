/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   entrypoint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecoma-ba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 10:31:08 by ecoma-ba          #+#    #+#             */
/*   Updated: 2024/06/06 10:47:50 by ecoma-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void	ft_putstr(char *str, int out)
{
	while (*str != '\0')
	{
		write(out, str, 1);
		str++;
	}
}

int	argc_check(int argc)
{
	if (argc < 2)
	{
		ft_putstr("File name missing.\n", 2);
		return (1);
	}
	if (argc > 2)
	{
		ft_putstr("Too many arguments.\n", 2);
		return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int		read_fd;
	int		read_bytes;
	char	buf[8];

	if (argc_check(argc))
		return (1);
	read_fd = open(argv[1], O_RDONLY);
	if (read_fd < 0)
	{
		ft_putstr("Cannot read file.\n", 2);
		return (1);
	}
	read_bytes = read(read_fd, buf, 8);
	while (read_bytes)
	{
		write(1, buf, read_bytes);
		read_bytes = read(read_fd, buf, 8);
	}
}
