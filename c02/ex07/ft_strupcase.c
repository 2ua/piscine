/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleissiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 13:25:15 by jleissiu          #+#    #+#             */
/*   Updated: 2024/06/12 13:25:17 by jleissiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
			i++;
			continue ;
		}
		else
		{
			i++;
			continue ;
		}
	}
	return (str);
}

// int main()
// {
// 	#include <stdio.h>
// 	char	string[] = "hey this is an Almost fully lowercase string :D";
// 	char	string2[] = "THIS ONE HAS MOSTLY UPPERcase LETTERS 0123456789";
// 	char	*ptr = string;
// 	char	*ptr2 = string2;
// 	char	 *result;

// 	result = ft_strupcase(ptr);
// 	printf("%s\n", result);

// 	result = ft_strupcase(ptr2);
// 	printf("%s\n", result);
// }