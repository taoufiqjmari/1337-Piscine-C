/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjmari <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 16:17:53 by tjmari            #+#    #+#             */
/*   Updated: 2019/07/20 17:39:16 by tjmari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int a;
	int len;

	i = 0;
	a = 0;
	len = 0;
	while (to_find[len] != '\0')
		len++;
	if (len == 0)
		return (str);
	while (str[i] != '\0')
	{
		while (to_find[a] == str[i + a])
		{
			if (a == len - 1)
				return (str + i);
			a++;
		}
		a = 0;
		i++;
	}
	return (0);
}
