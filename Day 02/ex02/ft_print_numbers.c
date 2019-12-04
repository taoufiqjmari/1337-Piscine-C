/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjmari <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 22:31:54 by tjmari            #+#    #+#             */
/*   Updated: 2019/07/10 17:41:18 by tjmari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	int fnumber;

	fnumber = '0';
	while (fnumber <= '9')
	{
		ft_putchar(fnumber);
		fnumber++;
	}
}
