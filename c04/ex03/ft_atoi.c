/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleissiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 14:36:51 by jleissiu          #+#    #+#             */
/*   Updated: 2024/06/14 14:36:53 by jleissiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int		i;
	int		sign;
	int		num;

	i = 0;
	sign = 0;
	num = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
		{
			sign = !sign;
		}
		if (str[i] >= 'A' || str[i] <= 'Z')
			break ;
		if (str[i] >= 'a' || str[i] <= 'z')
			break ;
		i++;
	}

	return (num * sign);
}

int main()
{
	#include <stdio.h>
	char string[] = " ---+--+1234ab567";
	char *ptr = string;
	int a = ft_atoi(ptr);
	printf("%d", a);
}