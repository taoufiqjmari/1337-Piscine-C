/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjmari <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 10:42:49 by tjmari            #+#    #+#             */
/*   Updated: 2019/07/20 14:11:20 by tjmari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char *argv[])
{
	int i;
	int c;

	i = 0;
	c = 1;
	while (c < argc)
	{
		while (argv[c][i] != '\0')
		{
			ft_putchar(argv[c][i]);
			i++;
		}
		ft_putchar('\n');
		i = 0;
		c++;
	}
	return (0);
}
