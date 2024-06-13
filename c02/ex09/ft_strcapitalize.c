/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleissiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 13:50:36 by jleissiu          #+#    #+#             */
/*   Updated: 2024/06/12 13:50:36 by jleissiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '-' || str[i] == '+')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] -= 32;
			}
		}
		if (i == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i++] -= 32;
			}
		}
		i++;
	}
	return (str);
}

// int main()
// {
// 	#include <stdio.h>
// 	char	string[] = "hey this is an Almost   fully 7owercase string :D";
// 	char	string2[] = "thats     alot      of     spaces  5  A";
// 	char	*ptr = string;
// 	char	*ptr2 = string2;
// 	char	 *result;

// 	result = ft_strcapitalize(ptr);
// 	printf("%s\n", result);

// 	result = ft_strcapitalize(ptr2);
// 	printf("%s\n", result);
// }