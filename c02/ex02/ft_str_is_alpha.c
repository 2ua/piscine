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
	int					is_upper;
	int					is_lower;

	i = 0;
	while (str[i] != '\0')
	{
		is_upper = (str[i] >= 'A' && str[i] <= 'Z');
		is_lower = (str[i] >= 'a' && str[i] <= 'z');
		if (!(is_upper || is_lower))
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
// 	char	string[] = "test99";
// 	char	string2[] = "validSTRINGlalala";
// 	char	*ptr = string;
// 	char	*ptr2 = string2;
// 	int		is_alpha;

// 	is_alpha = ft_str_is_alpha(ptr);
// 	printf("%d\n", is_alpha);

// 	is_alpha = ft_str_is_alpha(ptr2);
// 	printf("%d\n", is_alpha);
// }