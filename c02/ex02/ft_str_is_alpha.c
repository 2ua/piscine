/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleissiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 16:17:26 by jleissiu          #+#    #+#             */
/*   Updated: 2024/06/11 16:17:27 by jleissiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	unsigned int		i;
	int		is_letter;
	int		is_capital_letter;

	i = 0;
	while (str[i] != '\0')
	{
		is_letter = //check if its A to Z et etc store it yeah
		if (!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')))
		{
			return (1);
		}
		i++;
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
// 	char	string2[] = "validstringlalala";
// 	char	*ptr = string;
// 	char	*ptr2 = string2;
// 	int		is_alpha;

// 	is_alpha = ft_str_is_alpha(ptr);
// 	printf("%d\n", is_alpha);

// 	is_alpha = ft_str_is_alpha(ptr2);
// 	printf("%d\n", is_alpha);
// }