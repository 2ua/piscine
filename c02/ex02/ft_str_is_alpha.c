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
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			i++;
			continue ;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			i++;
			continue ;
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			i++;
			continue ;
		}
		return (1);
	}
	return (0);
}

// int main()
// {
// 	#include <stdio.h>
// 	char	string[] = "test!";
// 	char	string2[] = "valid02alPhaNUMeRic1235TR1NG";
// 	char	*ptr = string;
// 	char	*ptr2 = string2;
// 	int		is_alpha;

// 	is_alpha = ft_str_is_alpha(ptr);
// 	printf("%d\n", is_alpha);

// 	is_alpha = ft_str_is_alpha(ptr2);
// 	printf("%d\n", is_alpha);
// }