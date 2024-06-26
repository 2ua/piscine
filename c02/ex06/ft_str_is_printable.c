/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleissiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 16:50:21 by jleissiu          #+#    #+#             */
/*   Updated: 2024/06/11 16:50:22 by jleissiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	unsigned int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= ' ' && str[i] <= '~'))
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
// 	char	string[] = "Test!_ C 0123456789 HELLoo0O :)";
// 	char	string2[] = "\n";
// 	char	*ptr = string;
// 	char	*ptr2 = string2;
// 	int		is_printable;

// 	is_printable = ft_str_is_printable(ptr);
// 	printf("%d\n", is_printable);

// 	is_printable = ft_str_is_printable(ptr2);
// 	printf("%d\n", is_printable);
// }