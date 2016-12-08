/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleclet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 11:33:28 by aleclet           #+#    #+#             */
/*   Updated: 2016/11/21 15:46:31 by aleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int res;

	res = 0;
	if (nb < 0 || nb > 16)
	{
		res = 0;
	}
	else
	{
		res = (nb >= 1) ? nb * ft_recursive_factorial(nb - 1) : 1;
	}
	return (res);
}
