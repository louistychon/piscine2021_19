/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltychon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 13:09:11 by ltychon           #+#    #+#             */
/*   Updated: 2021/11/17 15:36:38 by ltychon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	nbr;

	nbr = 0;
	while (str[nbr] != '\0')
	{
		write(1, &str[nbr], 1);
		nbr++;
	}
}
