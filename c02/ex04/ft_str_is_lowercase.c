/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleissiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 16:36:13 by jleissiu          #+#    #+#             */
/*   Updated: 2024/06/11 16:36:15 by jleissiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	unsigned int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
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
// 	int		is_lowercase;

// 	is_lowercase = ft_str_is_lowercase(ptr);
// 	printf("%d\n", is_lowercase);

// 	is_lowercase = ft_str_is_lowercase(ptr2);
// 	printf("%d\n", is_lowercase);
// }