/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleissiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 16:04:29 by jleissiu          #+#    #+#             */
/*   Updated: 2024/06/26 16:04:30 by jleissiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
	char    chars[12];
	int     c;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return;
	}

	if (nb < 0)
	{
		ft_putchar('-');
		nb = 0 - nb;
	}

	while (nb / 10)
	{
		c = nb % 10;
		nb /= 10;
	}
	c = nb % 10 + '0';
	ft_putchar(c);
}

int main()
{
    ft_putnbr(-2147483648);
    printf("\n");
    ft_putnbr(1234567);
}