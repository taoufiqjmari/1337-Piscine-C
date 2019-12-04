/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjmari <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 10:24:17 by tjmari            #+#    #+#             */
/*   Updated: 2019/07/09 10:37:52 by tjmari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	char lletter;

	lletter = 'z';
	while (lletter >= 'a')
	{
		ft_putchar(lletter);
		lletter--;
	}
}
