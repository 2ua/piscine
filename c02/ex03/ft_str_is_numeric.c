/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleissiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 16:33:24 by jleissiu          #+#    #+#             */
/*   Updated: 2024/06/11 16:33:27 by jleissiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			i++;
			continue ;
		}
		return (1);
	}
	if (i < 1)
	{
		return (1);
	}
	return (0);
}

// int main()
// {
// 	#include <stdio.h>
// 	char	string[] = "test!";
// 	char	string2[] = "0123456789";
// 	char	*ptr = string;
// 	char	*ptr2 = string2;
// 	int		is_numeric;

// 	is_numeric = ft_str_is_numeric(ptr);
// 	printf("%d\n", is_numeric);

// 	is_numeric = ft_str_is_numeric(ptr2);
// 	printf("%d\n", is_numeric);
// }