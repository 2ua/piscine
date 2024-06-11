/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleissiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 11:24:11 by jleissiu          #+#    #+#             */
/*   Updated: 2024/06/10 11:27:47 by jleissiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	write(1, &str, 1);
}

int main()
{
	char	string;
	string[] = "Hello World!";
	ft_putstr(string);
}