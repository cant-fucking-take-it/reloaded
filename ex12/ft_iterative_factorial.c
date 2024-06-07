/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecoma-ba <ecoma-ba@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 11:03:36 by ecoma-ba          #+#    #+#             */
/*   Updated: 2024/06/07 14:22:39 by ecoma-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	value;

	value = 1;
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		value *= nb;
		if (value < 0)
			return (0);
		nb--;
	}
	return (value);
}
