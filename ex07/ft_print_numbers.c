/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecoma-ba <ecoma-ba@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 11:13:49 by ecoma-ba          #+#    #+#             */
/*   Updated: 2024/06/07 14:08:53 by ecoma-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(int c);

void	ft_print_numbers(void)
{
	int		i;
	char	to_write;

	i = 0;
	while (i < 10)
	{
		to_write = 48 + i;
		ft_putchar(to_write);
		i++;
	}
}
