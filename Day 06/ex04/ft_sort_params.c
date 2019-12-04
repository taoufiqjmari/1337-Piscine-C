/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjmari <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 15:35:29 by tjmari            #+#    #+#             */
/*   Updated: 2019/07/24 16:22:17 by tjmari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_swap(char *str[], int a, int b)
{
	char *temp;

	if (ft_strcmp(str[a], str[b]) > 0)
	{
		temp = str[a];
		str[a] = str[b];
		str[b] = temp;
	}
}

int		main(int argc, char *argv[])
{
	int i;
	int e;

	i = 1;
	while (i < argc - 1)
	{
		e = i + 1;
		while (e < argc)
		{
			ft_swap(argv, i, e);
			e++;
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
}
