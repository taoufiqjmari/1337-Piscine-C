/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjmari <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 22:31:54 by tjmari            #+#    #+#             */
/*   Updated: 2019/07/10 17:30:54 by tjmari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char fletter;

	fletter = 'a';
	while (fletter <= 'z')
	{
		ft_putchar(fletter);
		fletter++;
	}
}
