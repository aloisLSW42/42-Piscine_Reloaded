/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleclet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 09:52:11 by aleclet           #+#    #+#             */
/*   Updated: 2016/11/21 15:48:48 by aleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*table;
	int		i;

	if (min < max)
	{
		table = (int*)malloc((max - min) * sizeof(int));
		i = 0;
		while (min < max)
		{
			table[i] = min;
			i++;
			min++;
		}
	}
	else
	{
		table = (void*)0;
	}
	return (table);
}
