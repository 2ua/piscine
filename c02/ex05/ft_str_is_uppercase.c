/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleissiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 16:38:01 by jleissiu          #+#    #+#             */
/*   Updated: 2024/06/11 16:38:04 by jleissiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	unsigned int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			return (0);
		}
		i++;
	}
	if (i < 1)
	{
		return (1);
	}
	return (1);
}

// int main()
// {
// 	#include <stdio.h>
// 	char	string[] = "UPPERCASE";
// 	char	string2[] = "lowercase";
// 	char	*ptr = string;
// 	char	*ptr2 = string2;
// 	int		is_uppercase;
// 	is_uppercase = ft_str_is_uppercase(ptr);
// 	printf("%d\n", is_uppercase);

// 	is_uppercase = ft_str_is_uppercase(ptr2);
// 	printf("%d\n", is_uppercase);
// }