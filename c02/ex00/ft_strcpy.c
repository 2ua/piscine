/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleissiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:49:56 by jleissiu          #+#    #+#             */
/*   Updated: 2024/06/11 15:49:59 by jleissiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int main()
// {
// 	#include <stdio.h>
// 	char	string1[] = "";
// 	char	string2[] = "Hello world!";
// 	char	*dest = string1;
// 	char	*src = string2;

// 	ft_strcpy(dest, src);
// 	printf("%s\n%s", string1, string2);
// }
