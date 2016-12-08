/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleclet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 14:01:12 by aleclet           #+#    #+#             */
/*   Updated: 2016/11/19 17:59:18 by aleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *s)
{
	int		i;

	i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
}

void	ft_print(char **table)
{
	int		i;

	i = 1;
	while (table[i])
	{
		ft_putstr(table[i]);
		ft_putchar('\n');
		i++;
	}
}

int		ft_cmp_alpha(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
	{
		i++;
	}
	return ((s1[i] <= s2[i]) ? 1 : 0);
}

char	**ft_swap(char **table, int i1, int i2)
{
	char *tmp;

	tmp = table[i1];
	table[i1] = table[i2];
	table[i2] = tmp;
	return (table);
}

int		main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < argc - 1)
	{
		i = 0;
		while (i < argc - 1)
		{
			if (!ft_cmp_alpha(argv[i], argv[i + 1]))
			{
				argv = ft_swap(argv, i, i + 1);
			}
			i++;
		}
		j++;
	}
	ft_print(argv);
	return (0);
}
