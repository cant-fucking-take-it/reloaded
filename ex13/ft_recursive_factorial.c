/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecoma-ba <ecoma-ba@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 11:09:10 by ecoma-ba          #+#    #+#             */
/*   Updated: 2024/06/07 15:42:01 by ecoma-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	val;

	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	val = nb * ft_recursive_factorial(nb - 1);
	if (val < 0)
		return (0);
	return (val);
}
/*
#include<stdio.h>
int main()
{
	printf("%d\n", ft_recursive_factorial(10));
	printf("%d\n", ft_recursive_factorial(21));
	printf("%d\n", ft_recursive_factorial(12));
	printf("%d\n", ft_recursive_factorial(13));
	printf("%d\n", ft_recursive_factorial(14));
	printf("%d\n", ft_recursive_factorial(15));

}*/
