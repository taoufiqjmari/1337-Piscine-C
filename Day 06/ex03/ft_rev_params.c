/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjmari <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 11:48:13 by tjmari            #+#    #+#             */
/*   Updated: 2019/07/20 12:04:19 by tjmari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char *argv[])
{
	int i;
	int c;

	i = 0;
	c = argc - 1;
	while (c > 0)
	{
		while (argv[c][i] != '\0')
		{
			ft_putchar(argv[c][i]);
			i++;
		}
		ft_putchar('\n');
		i = 0;
		c--;
	}
	return (0);
}
