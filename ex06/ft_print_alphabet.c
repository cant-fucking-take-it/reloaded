/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecoma-ba <ecoma-ba@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 10:37:33 by ecoma-ba          #+#    #+#             */
/*   Updated: 2024/06/07 14:08:41 by ecoma-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(int c);

void	ft_print_alphabet(void)
{
	int		i;
	char	to_write;

	i = 0;
	while (i < 26)
	{
		to_write = 97 + i;
		ft_putchar(to_write);
		i++;
	}
}
